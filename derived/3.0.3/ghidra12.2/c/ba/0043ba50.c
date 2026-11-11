
void _INIT_208(void)

{
  byte *pbVar1;
  
  pbVar1 = DAT_04bd6108;
  if ((*DAT_04bd6108 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bd6128,PTR_DAT_04bd6130);
    pbVar1[0] = 1;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    pbVar1[4] = 0;
    pbVar1[5] = 0;
    pbVar1[6] = 0;
    pbVar1[7] = 0;
  }
  return;
}

