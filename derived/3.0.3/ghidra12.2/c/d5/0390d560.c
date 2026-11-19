
void FUN_0390d560(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  undefined8 *__ptr;
  void *__ptr_00;
  
  uVar7 = (uint)*(byte *)(param_1 + 0x3c);
  if ((*(byte *)(param_1 + 0x3c) >> 2 & 1) != 0) {
    lVar8 = *(long *)PTR_DAT_04bc1010;
    (*DAT_04c620d0)(param_1 + 0x40);
    piVar1 = (int *)(lVar8 + 0x654);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar7 = *(byte *)(param_1 + 0x3c) & 0xfffffffb;
    *(char *)(param_1 + 0x3c) = (char)uVar7;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  puVar4 = PTR_DAT_04bb2698;
  if ((uVar7 & 1) == 0) goto LAB_0390d658;
  __ptr = *(undefined8 **)(param_1 + 8);
  __ptr_00 = (void *)*__ptr;
  if (__ptr_00 == (void *)0x0) {
LAB_0390d61c:
    if (*(long *)puVar4 == 0) {
      free(__ptr);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar4,__ptr);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
      }
    }
  }
  else {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr_00);
      __ptr = *(undefined8 **)(param_1 + 8);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr_00);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,__ptr_00);
      }
      __ptr = *(undefined8 **)(param_1 + 8);
    }
    if (__ptr != (undefined8 *)0x0) goto LAB_0390d61c;
  }
  uVar7 = *(byte *)(param_1 + 0x3c) & 0xfe;
  *(char *)(param_1 + 0x3c) = (char)uVar7;
LAB_0390d658:
  bVar6 = (byte)uVar7;
  *(undefined8 *)(param_1 + 8) = 0;
  if ((uVar7 >> 1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      if (*(long **)(param_1 + 0x28) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x28) + 8))();
        bVar6 = *(byte *)(param_1 + 0x3c);
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(long *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    *(byte *)(param_1 + 0x3c) = bVar6 & 0xfd;
  }
  return;
}

