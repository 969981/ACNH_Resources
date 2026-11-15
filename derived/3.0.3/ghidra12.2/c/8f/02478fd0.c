
void FUN_02478fd0(long param_1)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_28;
  
  uVar7 = (uint)*(byte *)(param_1 + 0x190e);
  if (1 < uVar7) {
    uVar7 = 0;
  }
  local_54 = uVar7;
  if (*(char *)(param_1 + 0x190d) != '\0') {
    FUN_0231b104(param_1,6);
    *(undefined4 *)(param_1 + 0x1810) = 7;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    local_28 = CONCAT44(local_28._4_4_,*(undefined4 *)(param_1 + 0x230));
    sVar2 = *(short *)PTR_DAT_04bb6298;
    if (sVar2 == -1) {
LAB_0247908c:
      FUN_016f742c(&local_54,&local_28,0);
    }
    else {
      local_54 = 1;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 1 & 1) == 0) goto LAB_0247908c;
      local_54._2_2_ = 0;
    }
    if (uVar7 == 1) {
      local_54._2_2_ = local_54._2_2_ ^ 0x8000;
    }
    *(ushort *)(param_1 + 0x190a) = local_54._2_2_;
  }
  local_54 = 0;
  local_50 = CONCAT44(6,(undefined4)local_50);
  local_50 = local_50 & 0xffffffffffffff00;
  local_48 = (uint)local_48._3_1_ << 0x18;
  FUN_02321e44(&local_28,param_1,&local_54);
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) != 1) {
    FUN_023164ec(param_1,6);
  }
  *(undefined1 *)(param_1 + 0x965) = 0;
  *(undefined1 *)(param_1 + 0x985) = 0;
  *(undefined2 *)(param_1 + 0x990) = 0;
  *(undefined4 *)(param_1 + 0x994) = 0;
  *(undefined1 *)(param_1 + 0x998) = 0;
  *(undefined1 *)(param_1 + 0x9b5) = 0;
  *(undefined4 *)(param_1 + 0x958) = *(undefined4 *)(param_1 + 0x95c);
  *(undefined4 *)(param_1 + 0x978) = *(undefined4 *)(param_1 + 0x97c);
  *(undefined4 *)(param_1 + 0x9a8) = *(undefined4 *)(param_1 + 0x9ac);
  local_28 = 0xfffe;
  FUN_0277d4ac(&local_28);
  puVar3 = PTR_DAT_04bb43c0;
  local_28 = *(undefined8 *)(param_1 + 0x1902);
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_28);
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      *(undefined1 *)(param_1 + 0x998) = 0;
      local_50 = 0x3f8000003e8f5c29;
      local_44 = 0;
      local_54 = (uint)*(ushort *)(param_1 + 0x190a) << 0x10;
      local_48 = 0x41c80000;
      uVar6 = FUN_023b7bb8(param_1,&local_54);
      if ((uVar6 & 1) == 0) {
        return;
      }
      if (*(char *)(param_1 + 0x190c) == '\0') {
        FUN_024786d4(param_1);
        bVar4 = true;
      }
      else {
        bVar4 = true;
        *(undefined8 *)(param_1 + 0x9a8) = 0;
        *(undefined2 *)(param_1 + 0x9b4) = 0x100;
        *(undefined4 *)(param_1 + 0x9b0) = 0xf;
      }
      goto LAB_024791f8;
    }
  }
  bVar4 = uVar7 != 1;
  FUN_024786d4(param_1);
LAB_024791f8:
  *(bool *)(param_1 + 0x998) = bVar4;
  return;
}

