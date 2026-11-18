
/* WARNING: Removing unreachable block (ram,0x03387270) */

void FUN_03387100(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  long *plVar8;
  
  (**(code **)(**(long **)(param_1 + 0x48) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x50) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x58) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x60) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x68) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x70) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x78) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x80) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x88) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x90) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0x98) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0xa0) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0xa8) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0xb0) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0xb8) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 0xc0) + 0xb8))();
  (**(code **)(**(long **)(param_1 + 200) + 0xb8))();
  if (DAT_056658d0 != 0) {
    *(uint *)(DAT_056658d0 + 0x1e98) = *(uint *)(DAT_056658d0 + 0x1e98) | 1;
  }
  lVar5 = *(long *)(DAT_05739190 + 0x58);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0xa8) - 3U < 5)) {
    FUN_0386b2b0(*(undefined8 *)(lVar5 + 0x98));
  }
  puVar1 = PTR_DAT_04bc98b0;
  *(undefined1 *)(param_1 + 0x428) = 0xff;
  lVar5 = *(long *)puVar1;
  if ((*(int *)(lVar5 + 8) < 1) && (*(int *)(lVar5 + 0x10) == 0)) {
LAB_0338731c:
    *(undefined4 *)(lVar5 + 0x10) = 0;
    *(undefined8 *)(lVar5 + 8) = 0;
  }
  else {
    lVar6 = *(long *)(DAT_05231900 + 0x140);
    if ((*(char *)(lVar6 + 0x16c) != '\0' || *(char *)(lVar6 + 0x16d) != '\0') &&
       ((*(uint *)(lVar6 + 0x170) & 1) != 0)) {
      puVar7 = (uint *)(lVar6 + 0x170);
      do {
        uVar2 = *puVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar4) {
          *puVar7 = uVar2 | 2;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar2 >> 1 & 1) == 0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar4) {
            *puVar7 = *puVar7 & 0xfffffffe;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        *(undefined1 *)(lVar6 + 0x16a) = 1;
        goto LAB_0338731c;
      }
    }
  }
  lVar5 = DAT_057514a0;
  if ((0 < *(int *)(DAT_057514a0 + 8)) || (*(int *)(DAT_057514a0 + 0x10) != 0)) {
    lVar6 = *(long *)(DAT_05231900 + 0x148);
    if ((*(char *)(lVar6 + 0x3a0) == '\0' && *(char *)(lVar6 + 0x3a1) == '\0') ||
       (puVar7 = (uint *)(lVar6 + 0xf8), (*puVar7 & 1) == 0)) goto LAB_033873d0;
    do {
      uVar2 = *puVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar4) {
        *puVar7 = uVar2 | 2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar2 & 2) != 0) goto LAB_033873d0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar4) {
        *puVar7 = *puVar7 & 0xfffffffe;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(lVar6 + 0x3a3) = 1;
  }
  *(undefined4 *)(lVar5 + 0x10) = 0;
  *(undefined8 *)(lVar5 + 8) = 0;
LAB_033873d0:
  *(undefined1 *)(param_1 + 0x50d) = 0;
  if (DAT_04c487d4 != -1) {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((((*(uint *)(puVar1 + 4) & 1) != 0) && (lVar5 = *(long *)(DAT_05231900 + 0x100), lVar5 != 0)
        ) && (*(int *)(param_1 + 0xac0) != 0)) {
      plVar8 = *(long **)(param_1 + 0xac8);
      lVar6 = (long)*(int *)(param_1 + 0xac0) << 3;
      do {
        if ((*(ushort *)(*plVar8 + 0x10) >> 1 & 1) != 0) {
          FUN_015a30c0(lVar5);
        }
        plVar8 = plVar8 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
  }
  return;
}

