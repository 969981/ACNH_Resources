
void FUN_02dfa190(long param_1,byte *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *local_70;
  char *local_68;
  
  bVar8 = *param_2;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  *(byte *)(param_1 + 0x1f8) = bVar8;
  puVar2 = PTR_DAT_04bc4e60;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  local_68 = *(char **)(param_2 + 0x20);
  if ((*local_68 == '\0') && (local_68 = "DIALOG_WherearenMsg", *(int *)(param_2 + 0x38) != 1)) {
    local_68 = "DIALOG_Msg";
  }
  puVar10 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar1 = PTR_DAT_04bc4e58;
  uVar4 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58);
  if ((uVar4 & 1) == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  uVar11 = *(undefined8 *)puVar10[0x43];
  puVar10 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0)) {
    *(undefined **)puVar1 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar4 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58);
  if ((uVar4 & 1) == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  lVar6 = 0x18;
  if (*(uint *)(puVar10 + 0x42) < 4) {
    lVar6 = 0;
  }
  FUN_01b9f140(param_1 + 0x230,&local_70,param_2 + 8,uVar11,*(undefined8 *)(puVar10[0x43] + lVar6));
  *(undefined8 *)(param_1 + 0x2388) = *(undefined8 *)(param_2 + 0x28);
  *(byte *)(param_1 + 0x23a9) = param_2[0x30];
  *(byte *)(param_1 + 0x23ab) = param_2[0x31];
  *(byte *)(param_1 + 0x23ac) = param_2[0x32];
  *(byte *)(param_1 + 0x23ad) = param_2[0x33];
  bVar8 = param_2[0x34];
  *(undefined1 *)(param_1 + 0x23b2) = 0;
  *(byte *)(param_1 + 0x23ae) = bVar8;
  lVar6 = *(long *)(param_1 + 0x210);
  if ((*(uint *)(lVar6 + 0x48) < 7) && ((1 << (ulong)(*(uint *)(lVar6 + 0x48) & 0x1f) & 0x58U) != 0)
     ) {
    return;
  }
  if (param_2[0x35] == 0) {
    if (((*(long *)PTR_DAT_04bb2808 != 0) &&
        (lVar7 = *(long *)(*(long *)PTR_DAT_04bb2808 + 8), lVar7 != 0)) &&
       (*(int *)(lVar7 + 0x1b0) == 3)) {
      if (*(int *)(lVar6 + 0x218) != 0x1d) {
        *(undefined4 *)(lVar6 + 0x218) = 0x1d;
        *(undefined1 *)(lVar6 + 0x21d) = 1;
      }
      lVar6 = *(long *)(param_1 + 0x218);
      if (*(int *)(lVar6 + 0x218) == 0x1d) {
        uVar5 = 0x3d;
        uVar9 = 0x3e;
        goto LAB_02dfa408;
      }
      uVar9 = 0x3e;
      *(undefined4 *)(lVar6 + 0x218) = 0x1d;
      uVar5 = 0x3d;
      goto LAB_02dfa400;
    }
    if (*(int *)(lVar6 + 0x218) != 3) {
      *(undefined4 *)(lVar6 + 0x218) = 3;
      *(undefined1 *)(lVar6 + 0x21d) = 1;
    }
    lVar6 = *(long *)(param_1 + 0x218);
    if (*(int *)(lVar6 + 0x218) != 3) {
      uVar5 = 3;
      goto LAB_02dfa3f4;
    }
  }
  else {
    if (*(int *)(lVar6 + 0x218) != 4) {
      *(undefined4 *)(lVar6 + 0x218) = 4;
      *(undefined1 *)(lVar6 + 0x21d) = 1;
    }
    lVar6 = *(long *)(param_1 + 0x218);
    if (*(int *)(lVar6 + 0x218) != 4) {
      uVar5 = 4;
LAB_02dfa3f4:
      *(undefined4 *)(lVar6 + 0x218) = uVar5;
      uVar5 = 0x2e;
      uVar9 = 0x2f;
LAB_02dfa400:
      *(undefined1 *)(lVar6 + 0x21d) = 1;
      goto LAB_02dfa408;
    }
  }
  uVar5 = 0x2e;
  uVar9 = 0x2f;
LAB_02dfa408:
  *(undefined4 *)(*(long *)(param_1 + 0x210) + 0x3ec) = uVar9;
  *(undefined4 *)(*(long *)(param_1 + 0x218) + 0x3ec) = uVar5;
  return;
}

