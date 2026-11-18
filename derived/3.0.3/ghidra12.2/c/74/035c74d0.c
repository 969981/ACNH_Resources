
void FUN_035c74d0(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != 0) {
    lVar11 = *(long *)(param_1 + 0x38);
    uVar10 = 0;
    do {
      if (*(int *)(lVar11 + uVar10 * 4) != 0) {
        *(undefined4 *)(lVar11 + uVar10 * 4) = 0;
        plVar9 = *(long **)(lVar11 + (lVar5 * 4 + 7U & 0xfffffffffffffff8) + uVar10 * 0x20 + 0x18);
        if (plVar9 != (long *)0x0) {
          plVar1 = plVar9 + 1;
          do {
            lVar7 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(ulong *)(param_1 + 0x48));
  }
  uVar2 = *(uint *)(param_1 + 0x7c);
  uVar10 = (ulong)uVar2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if ((uVar2 & 1) == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    uVar10 = uVar10 - 1;
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x70) + uVar10 * *(uint *)(param_1 + 0x78));
    *puVar6 = 0;
  }
  if (uVar2 != 1) {
    lVar5 = uVar10 - 1;
    do {
      puVar8 = (undefined8 *)(*(long *)(param_1 + 0x70) + lVar5 * (ulong)*(uint *)(param_1 + 0x78));
      *puVar8 = puVar6;
      bVar4 = lVar5 != 1;
      puVar6 = (undefined8 *)
               (*(long *)(param_1 + 0x70) + (lVar5 + -1) * (ulong)*(uint *)(param_1 + 0x78));
      *puVar6 = puVar8;
      lVar5 = lVar5 + -2;
    } while (bVar4);
  }
  *(undefined8 **)(param_1 + 0x80) = puVar6;
  *(undefined8 *)(param_1 + 0x70) = 0;
  (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
            (*(long **)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}

