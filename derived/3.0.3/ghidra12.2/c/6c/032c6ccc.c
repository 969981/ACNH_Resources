
/* WARNING: Removing unreachable block (ram,0x032c6d08) */
/* WARNING: Removing unreachable block (ram,0x032c6d84) */

void FUN_032c6ccc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined4 local_40 [4];
  
  puVar1 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0x38) != 0) goto LAB_032c6de8;
  local_40[0] = 0;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar4 = malloc(0x10);
joined_r0x032c6e18:
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 1;
      puVar4[1] = 0;
      *(undefined4 *)(param_1 + 0x30) = 1;
      *(undefined8 **)(param_1 + 0x38) = puVar4 + 1;
    }
  }
  else {
    plVar2 = (long *)**(long **)(param_1 + 0x18);
    if (plVar2 != (long *)0x0) {
LAB_032c6d44:
      puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x10,8);
      goto joined_r0x032c6e18;
    }
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar2 = (long *)(lVar6 + 8);
    if (lVar3 != 0) {
      plVar2 = (long *)(lVar3 + 0xa8);
    }
    plVar2 = (long *)*plVar2;
    if (plVar2 != (long *)0x0) goto LAB_032c6d44;
  }
  local_40[0] = 0;
  lVar6 = *(long *)puVar1;
  if (lVar6 == 0) {
    puVar5 = malloc(1);
  }
  else {
    plVar2 = (long *)**(long **)(param_1 + 0x18);
    if (plVar2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) goto LAB_032c6de8;
    }
    puVar5 = (undefined1 *)(**(code **)(*plVar2 + 0x30))(plVar2,1,1);
  }
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = 0;
    *(undefined1 **)(param_1 + 0x48) = puVar5;
    *(undefined4 *)(param_1 + 0x40) = 1;
  }
LAB_032c6de8:
  FUN_032c89b0(local_40,*(undefined8 *)(param_1 + 0x18));
  FUN_032c8afc(local_40);
  return;
}

