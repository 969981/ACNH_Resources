
/* WARNING: Removing unreachable block (ram,0x00223114) */

void FUN_00223068(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  uVar1 = FUN_0021ee90();
  if ((uVar1 & 1) == 0) {
    local_40 = 0x10c0c;
  }
  else {
    uVar1 = FUN_0021f1e0();
    if ((uVar1 & 1) == 0) {
      local_40 = 0x10c08;
    }
    else {
      if (DAT_04c5fbb0 == (undefined8 *)0x0) {
        uVar2 = FUN_0021f454();
        puVar3 = (undefined8 *)FUN_00285d60(0x88,uVar2,8);
        if (puVar3 == (undefined8 *)0x0) {
          local_40 = 0x10c01;
          DAT_04c5fbb8 = 0;
        }
        else {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[0x10] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
          puVar3[5] = 0;
          puVar3[6] = 0;
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3[9] = 0;
          puVar3[10] = 0;
          puVar3[0xb] = 0;
          puVar3[0xc] = 0;
          puVar3[0xd] = 0;
          puVar3[0xe] = 0;
          puVar3[0xf] = 0;
          *(undefined8 **)PTR_DAT_04bccfd8 = puVar3;
          FUN_002231a0(puVar3,0x18);
          local_40 = 0;
          DAT_04c5fbb0 = puVar3;
        }
        goto LAB_002230d8;
      }
      local_40 = 0x10c0f;
    }
  }
LAB_002230d8:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

