
uint FUN_024e85e0(long param_1,int param_2,byte *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  float local_6c [3];
  undefined4 local_60;
  byte local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined8 local_48;
  
  lVar3 = *(long *)PTR_DAT_04bb2720;
  if (lVar3 == 0) {
    puVar4 = &DAT_055c04a0;
  }
  else {
    puVar4 = &DAT_055c04a0;
    if (*(long *)(lVar3 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar3 + 0x338));
      iVar1 = FUN_006bd550(*puVar4,0);
      puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar4 = &DAT_055c04a0;
      }
    }
  }
  if (*(int *)(puVar4 + 7) == param_2) {
    local_4c = 0x101;
    local_48 = 0x1000000000000;
    local_5c = *param_3;
    if (7 < local_5c) {
      local_5c = 0xff;
    }
    local_6c[1] = 0.0;
    local_60 = 0x40800000;
    local_54 = 0xbf80000000000003;
    local_4a = 0;
    local_6c[0] = ((float)*(int *)(param_1 + 0x10) * 5.0 +
                  (float)*(int *)(param_1 + 0x20) * 5.0 + 5.0) * 0.5;
    local_6c[2] = ((float)*(int *)(param_1 + 0x14) * 5.0 +
                  (float)*(int *)(param_1 + 0x24) * 5.0 + 5.0) * 0.5;
    local_58 = param_4;
    uVar2 = FUN_0251fad0(local_6c,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 1;
}

