
undefined8 FUN_00958960(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined *local_178;
  undefined1 *local_170;
  int local_168;
  undefined1 local_164 [255];
  undefined1 local_65;
  undefined *local_60;
  long lStack_58;
  undefined8 local_38;
  
  local_65 = 0;
  local_168 = 0x100;
  local_164[0] = 0;
  local_178 = PTR_DAT_04bb21f8 + 0x10;
  local_170 = local_164;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar10 = (undefined1 *)param_2[1];
  if (local_164 != puVar10) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = 0;
    do {
      if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_00958a2c;
      lVar1 = param_2[1] + lVar8;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_00958a2c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_00958a2c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_00958a2c:
    iVar4 = (int)lVar8;
    if (local_168 <= (int)lVar8) {
      iVar4 = local_168 + -1;
    }
    memcpy(local_164,puVar10,(long)iVar4);
    local_164[iVar4] = 0;
  }
  puVar10 = local_170;
  (**(code **)(local_178 + 0x18))(&local_178);
  lVar8 = 0;
  do {
    if (local_170[lVar8] == '\0') goto LAB_00958aac;
    if (local_170[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_00958aac;
    }
    if (local_170[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_00958aac;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_00958aac:
  uVar2 = (uint)lVar8 & ((int)(uint)lVar8 >> 0x1f ^ 0xffffffffU);
  uVar3 = 4;
  if ((int)(local_168 - uVar2) < 5) {
    uVar3 = local_168 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    memcpy(puVar10 + uVar2,&DAT_040b50da,(ulong)uVar3);
    puVar10[(ulong)uVar3 + (ulong)uVar2] = 0;
  }
  if ((*(byte *)(param_1 + 0x480) >> 1 & 1) != 0) {
    uVar5 = FUN_03f2d924(param_1 + 0x478);
    if ((uVar5 & 1) != 0) {
      puVar6 = (undefined8 *)FUN_03f2d7f0(param_1 + 0x478);
      if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb4be0 = PTR_DAT_04bb4448 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4be8);
      }
      if (((puVar6 != (undefined8 *)0x0) &&
          (uVar5 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bb4be0), (uVar5 & 1) != 0)) &&
         ((undefined8 *)puVar6[6] != (undefined8 *)0x0)) {
        local_38 = 0;
        plVar9 = *(long **)puVar6[6];
        (**(code **)(*param_3 + 0x18))(param_3);
        lStack_58 = param_3[1];
        local_60 = PTR_DAT_04bb2020 + 0x10;
        if (((*PTR_DAT_04bb2868 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb2868);
        }
        uVar5 = (**(code **)*plVar9)(plVar9,PTR_DAT_04bb2860);
        if ((uVar5 & 1) == 0) {
          plVar9 = (long *)0x0;
        }
        uVar7 = (**(code **)(*plVar9 + 0x30))(plVar9,&local_60,&local_38);
        return uVar7;
      }
    }
  }
  return 0;
}

