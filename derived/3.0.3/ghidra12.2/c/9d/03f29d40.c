
void FUN_03f29d40(long param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  void *__ptr;
  
  puVar4 = PTR_DAT_04bb2698;
  if ((*(uint *)(*(long *)PTR_DAT_04bc3578 + 0xb0) >> 2 & 1) == 0) {
    return;
  }
  do {
    uVar7 = *(uint *)(param_1 + 0x11c);
    iVar5 = -uVar7;
    do {
      if (iVar5 + *(int *)(param_1 + 0x118) < 1) {
LAB_03f29e30:
        puVar1 = (uint *)(param_1 + 0x120);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 & 0xfffffffe;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        return;
      }
      uVar8 = (ulong)(*(int *)(param_1 + 0x108) - 1U & uVar7);
      __ptr = *(void **)(*(long *)(param_1 + 0x110) + uVar8 * 8);
      if (__ptr == (void *)0x0) goto LAB_03f29e30;
      *(undefined8 *)(*(long *)(param_1 + 0x110) + uVar8 * 8) = 0;
      uVar7 = uVar7 + 1;
      DataMemoryBarrier(2,3);
      iVar5 = iVar5 + -1;
      *(uint *)(param_1 + 0x11c) = uVar7;
    } while (__ptr == (void *)0xffffffffffffffff);
    iVar5 = FUN_03f29390(__ptr);
    if ((iVar5 == 1) || (iVar5 != 3)) {
      FUN_03f29b30(__ptr);
      if (*(long *)puVar4 == 0) {
        free(__ptr);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)puVar4,__ptr);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
        }
      }
    }
  } while( true );
}

