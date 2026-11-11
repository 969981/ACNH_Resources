
uint FUN_00481410(float param_1,float param_2,float param_3,float param_4)

{
  return ((int)(param_1 * DAT_04102edc) & 0xffU) << 0x10 |
         ((int)(param_2 * DAT_04102edc) & 0xffU) << 8 | (int)(param_3 * DAT_04102edc) & 0xffU |
         (int)(param_4 * DAT_04102edc) << 0x18;
}

