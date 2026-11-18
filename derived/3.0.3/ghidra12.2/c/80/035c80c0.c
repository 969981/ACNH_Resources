
void FUN_035c80c0(ulong *param_1,MutexType *param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong local_50;
  ulong uStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = (uint)param_4 & 0xff;
  nn::os::LockMutex(param_2);
  uVar8 = (uint)(param_3 >> 1) ^ (uint)param_3;
  if (0xfff < param_3) {
    uVar8 = (uint)(param_3 >> 4);
  }
  uVar9 = *(ulong *)(param_2 + 0x48);
  uVar8 = uVar3 + uVar8;
  if (uVar8 < 2) {
    uVar8 = 1;
  }
  if (uVar9 != 0) {
    uVar11 = 0;
    if (uVar9 != 0) {
      uVar11 = uVar8 / uVar9;
    }
    lVar10 = (ulong)uVar8 - uVar11 * uVar9;
    uVar11 = uVar9;
    do {
      uVar5 = *(uint *)(*(long *)(param_2 + 0x38) + lVar10 * 4);
      if (uVar5 == 0) break;
      if (((uVar5 == uVar8) &&
          (puVar2 = (ulong *)(*(long *)(param_2 + 0x38) + (uVar9 * 4 + 7 & 0xfffffffffffffff8) +
                             lVar10 * 0x20), param_3 == *puVar2)) && ((byte)puVar2[1] == uVar3)) {
        uVar9 = puVar2[2];
        uVar11 = puVar2[3];
        if (uVar11 != 0) {
          plVar1 = (long *)(uVar11 + 8);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = *plVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        *param_1 = uVar9;
        param_1[1] = uVar11;
        lVar10 = *(long *)(uVar9 + 0x18);
        lVar4 = *(long *)(uVar9 + 0x20);
        *(long *)(lVar4 + 0x18) = lVar10;
        *(long *)(lVar10 + 0x20) = lVar4;
        *(MutexType **)(uVar9 + 0x18) = param_2 + 0xb8;
        *(undefined8 *)(uVar9 + 0x20) = *(undefined8 *)(param_2 + 0xd8);
        *(ulong *)(*(long *)(param_2 + 0xd8) + 0x18) = uVar9;
        *(ulong *)(param_2 + 0xd8) = uVar9;
        goto LAB_035c81ec;
      }
      lVar4 = 0;
      if (lVar10 + 1U < uVar9) {
        lVar4 = lVar10 + 1;
      }
      uVar11 = uVar11 - 1;
      lVar10 = lVar4;
    } while (uVar11 != 0);
  }
  FUN_035c7980(&local_50,param_2,param_3,param_4);
  *param_1 = local_50;
  param_1[1] = uStack_48;
LAB_035c81ec:
  nn::os::UnlockMutex(param_2);
  return;
}

