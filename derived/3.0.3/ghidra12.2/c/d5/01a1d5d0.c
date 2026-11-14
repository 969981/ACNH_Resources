
uint FUN_01a1d5d0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  byte local_28;
  undefined7 uStack_27;
  
  local_30 = 0;
  local_38 = PTR_DAT_04bbfe68 + 0x10;
  if (DAT_05aed670 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar3 = FUN_006bd550(*puVar7,0);
      puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar7 = &DAT_055c04a0;
      }
    }
  }
  local_2c = *(undefined4 *)(puVar7 + 7);
  local_28 = FUN_017baf44();
  local_28 = local_28 & 1;
  puVar5 = (undefined2 *)FUN_01a5190c(&local_38,0,param_1,0);
  lVar2 = DAT_05150358;
  local_40 = *puVar5;
  local_3e = *(undefined1 *)(puVar5 + 1);
  local_3d = *(undefined1 *)((long)puVar5 + 3);
  local_3c = *(undefined4 *)(puVar5 + 2);
  if (DAT_05150358 != 0) {
    uVar4 = 0;
    if ((*(long *)(DAT_05150358 + 0xb0) == 0) ||
       (uVar4 = 0, *(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0)) goto LAB_01a1d74c;
    uVar4 = 0;
    if ((*(long *)(DAT_05150358 + 0x488) == 0) ||
       (uVar4 = 0, *(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0)) goto LAB_01a1d74c;
    uVar4 = 0;
    if ((*(long *)(DAT_05150358 + 0x2b0) == 0) ||
       (uVar4 = 0, *(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0)) goto LAB_01a1d74c;
    uVar4 = FUN_0277d6c4(&local_40);
    uVar1 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
    if (uVar1 < *(uint *)(lVar2 + 0x1d8)) {
      uVar4 = 0;
      if (*(long *)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar1 * 8) == 0) goto LAB_01a1d74c;
      FUN_0124c030(&local_38,&local_40);
      uVar6 = FUN_0123d890(CONCAT71(uStack_27,local_28),4);
      if ((uVar6 & 1) != 0) {
        uVar4 = FUN_0123d890(CONCAT71(uStack_27,local_28),0);
        uVar4 = uVar4 ^ 1;
        goto LAB_01a1d74c;
      }
    }
  }
  uVar4 = 0;
LAB_01a1d74c:
  return uVar4 & 1;
}

