
/* WARNING: Type propagation algorithm not settling */

ulong FUN_010f9df0(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined *local_40;
  long lStack_38;
  
  if ((*(byte *)(param_1 + 0x150) & 3) != 1) {
    return 0;
  }
  plVar7 = (long *)(param_1 + 0x38);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  lVar6 = *(long *)(param_1 + 0x40);
  lVar5 = 0;
  do {
    if (*(char *)(lVar6 + lVar5) == '\0') {
LAB_010f9e78:
      iVar1 = (int)lVar5;
joined_r0x010f9e7c:
      if (0 < iVar1) {
        lVar8 = 0;
        goto LAB_010f9e94;
      }
      break;
    }
    if (*(char *)(lVar6 + lVar5 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_010f9e78;
    }
    if (*(char *)(lVar6 + lVar5 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      iVar1 = (int)lVar5;
      goto joined_r0x010f9e7c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  goto LAB_010f9f00;
  while( true ) {
    if (*(char *)(lVar6 + lVar5 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_010fa06c;
    }
    if (*(char *)(lVar6 + lVar5 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_010fa06c;
    }
    lVar5 = lVar5 + 3;
    if (lVar5 == 0x80001) break;
LAB_010f9ed0:
    if (*(char *)(lVar6 + lVar5) == '\0') goto LAB_010fa06c;
  }
  lVar5 = 0;
LAB_010fa06c:
  lStack_38 = *(long *)(PTR_PTR_04bb2238 + 8);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  if ((int)lVar8 < (int)lVar5) {
    lStack_38 = lVar6 + lVar8 + 1;
  }
  uVar3 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_40,PTR_DAT_04bb3238,1);
  uVar2 = (uint)uVar3;
  *(uint *)(param_1 + 8) = uVar2;
  plVar7 = (long *)PTR_DAT_04bb27c0;
  goto joined_r0x010fa0b8;
  while (lVar8 = lVar8 + 1, lVar5 != lVar8) {
LAB_010f9e94:
    if (*(char *)(lVar6 + lVar8) == '_') {
      if (-1 < (int)lVar8) {
        (**(code **)(*(long *)(param_1 + 0x38) + 0x18))(plVar7);
        lVar6 = *(long *)(param_1 + 0x40);
        lVar5 = 0;
        goto LAB_010f9ed0;
      }
      break;
    }
  }
LAB_010f9f00:
  uVar2 = *(uint *)PTR_DAT_04bb3238;
  uVar3 = (ulong)uVar2;
  *(uint *)(param_1 + 8) = uVar2;
  plVar7 = (long *)PTR_DAT_04bb27c0;
joined_r0x010fa0b8:
  if (uVar2 == 0) {
    PTR_DAT_04bb27c0 = (undefined *)plVar7;
    return uVar3;
  }
  lVar5 = *plVar7;
  if (lVar5 == 0) {
    PTR_DAT_04bb27c0 = (undefined *)plVar7;
    return 0;
  }
  lVar6 = *(long *)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) + (uVar3 >> 0x14 & 0xfff) * 8);
  if (((lVar6 == 0) || ((*(uint *)(lVar6 + 0x248) >> 1 & 1) != 0)) ||
     (*(int *)(lVar6 + 0x230) != (int)uVar3)) {
    lVar6 = 0;
  }
  PTR_DAT_04bb27c0 = (undefined *)plVar7;
  if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *plVar7;
    iVar1 = (**(code **)(*plVar4 + 0x60))();
    if (iVar1 < 0x11) {
      uVar2 = 0;
      goto joined_r0x010f9fb0;
    }
    if (*(uint *)(lVar5 + 0x5e8) < 5) {
      uVar2 = 5U >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x010f9fb0;
    }
  }
  uVar2 = 1;
joined_r0x010f9fb0:
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x150) != 1) {
      uVar2 = 1;
    }
    if (uVar2 == 0) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar6 + 0x98);
      lVar5 = *(long *)(param_1 + 0xf0);
      if (lVar5 != param_1 + 0xe8) {
        lVar6 = lVar5 + -0x58;
        do {
          *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(param_1 + 0x10);
          lVar5 = *(long *)(lVar5 + 8);
          lVar6 = lVar5 + -0x58;
        } while (lVar6 != param_1 + 0x90);
      }
      lVar5 = *(long *)(param_1 + 0x120);
      if (lVar5 != param_1 + 0x118) {
        lVar6 = lVar5 + -0x20;
        do {
          *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_1 + 0x10);
          lVar5 = *(long *)(lVar5 + 8);
          lVar6 = lVar5 + -0x20;
        } while (lVar6 != param_1 + 0xf8);
      }
      return 1;
    }
  }
  return 0;
}

