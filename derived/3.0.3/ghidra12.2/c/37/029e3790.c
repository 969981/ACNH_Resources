
undefined4 FUN_029e3790(undefined8 param_1,uint *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 local_c;
  undefined4 local_4;
  
  bVar2 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
  if (bVar2 < 5) {
    uVar5 = 5;
  }
  else if (bVar2 < 8) {
    uVar5 = 0;
  }
  else if (bVar2 < 0xc) {
    uVar5 = 1;
  }
  else {
    uVar8 = 3;
    if (0x12 < bVar2) {
      uVar8 = 4;
    }
    uVar5 = 2;
    if (0xf < bVar2) {
      uVar5 = uVar8;
    }
  }
  uVar8 = *param_2;
  if (uVar5 < 4) {
    iVar6 = *(int *)(&DAT_04102000 + (long)(int)uVar5 * 4);
  }
  else {
    iVar6 = 2;
  }
  if (iVar6 == 1) {
    local_c = 0x7300000072;
  }
  else {
    if (iVar6 == 0) {
      local_4 = 0;
      local_c = 0x7400000072;
      uVar5 = -(uVar8 & 1);
      if (-1 < (int)uVar8) {
        uVar5 = uVar8 & 1;
      }
      uVar7 = (ulong)uVar5;
      if (2 < uVar5) {
        uVar7 = 0;
      }
      uVar1 = *(undefined4 *)((long)&local_c + uVar7 * 4);
      iVar6 = 2;
      goto LAB_029e38b4;
    }
    local_c = 0x7500000074;
  }
  local_4 = 0x76;
  uVar5 = (int)uVar8 % 3;
  uVar7 = (ulong)uVar5;
  if (2 < uVar5) {
    uVar7 = 0;
  }
  uVar1 = *(undefined4 *)((long)&local_c + uVar7 * 4);
  iVar6 = 3;
LAB_029e38b4:
  iVar4 = (int)(char)((char)uVar5 + '\x01');
  iVar3 = 0;
  if (iVar6 != 0) {
    iVar3 = iVar4 / iVar6;
  }
  *param_2 = iVar4 - iVar3 * iVar6;
  return uVar1;
}

