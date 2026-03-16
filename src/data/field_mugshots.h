static const u32 sFieldMugshotGfx_TestNormal[] = INCBIN_U32("graphics/field_mugshots/test/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_TestAlt[] = INCBIN_U32("graphics/field_mugshots/test/alt.4bpp.lz");
static const u16 sFieldMugshotPal_TestNormal[] = INCBIN_U16("graphics/field_mugshots/test/normal.gbapal");
static const u16 sFieldMugshotPal_TestAlt[] = INCBIN_U16("graphics/field_mugshots/test/alt.gbapal");

static const u32 sFieldMugshotGfx_MayNormal[] = INCBIN_U32("graphics/field_mugshots/may/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_MayAlt[] = INCBIN_U32("graphics/field_mugshots/may/alt.4bpp.lz");
static const u16 sFieldMugshotPal_MayNormal[] = INCBIN_U16("graphics/field_mugshots/may/normal.gbapal");
static const u16 sFieldMugshotPal_MayAlt[] = INCBIN_U16("graphics/field_mugshots/may/alt.gbapal");

static const u32 sFieldMugshotGfx_BrendanNormal[] = INCBIN_U32("graphics/field_mugshots/brendan/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_BrendanAlt[] = INCBIN_U32("graphics/field_mugshots/brendan/alt.4bpp.lz");
static const u16 sFieldMugshotPal_BrendanNormal[] = INCBIN_U16("graphics/field_mugshots/brendan/normal.gbapal");
static const u16 sFieldMugshotPal_BrendanAlt[] = INCBIN_U16("graphics/field_mugshots/brendan/alt.gbapal");

struct MugshotGfx
{
    const u32 *gfx;
    const u16 *pal;
};

static const struct MugshotGfx sFieldMugshots[MUGSHOT_COUNT][EMOTE_COUNT] =
{
    [MUGSHOT_TEST] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_TestNormal,
            .pal = sFieldMugshotPal_TestNormal,
        },

        [EMOTE_ALT] =
        {
            .gfx = sFieldMugshotGfx_TestAlt,
            .pal = sFieldMugshotPal_TestAlt,
        },
    },
    [MUGSHOT_MAY] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_MayNormal,
            .pal = sFieldMugshotPal_MayNormal,
        },

        [EMOTE_ALT] =
        {
            .gfx = sFieldMugshotGfx_MayAlt,
            .pal = sFieldMugshotPal_MayAlt,
        },
    },
    [MUGSHOT_BRENDAN] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_BrendanNormal,
            .pal = sFieldMugshotPal_BrendanNormal,
        },

        [EMOTE_ALT] =
        {
            .gfx = sFieldMugshotGfx_BrendanAlt,
            .pal = sFieldMugshotPal_BrendanAlt,
        },
    },
};
