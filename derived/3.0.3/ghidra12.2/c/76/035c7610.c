
void FUN_035c7610(ulong *param_1,MutexType *param_2,ulong param_3,uint param_4)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  nn::os::LockMutex(param_2);
  uVar7 = (uint)(param_3 >> 1) ^ (uint)param_3;
  if (0xfff < param_3) {
    uVar7 = (uint)(param_3 >> 4);
  }
  uVar8 = *(ulong *)(param_2 + 0x48);
  uVar7 = (param_4 & 0xff) + uVar7;
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  if (uVar8 != 0) {
    uVar10 = 0;
    if (uVar8 != 0) {
      uVar10 = uVar7 / uVar8;
    }
    lVar9 = (ulong)uVar7 - uVar10 * uVar8;
    uVar10 = uVar8;
    do {
      uVar4 = *(uint *)(*(long *)(param_2 + 0x38) + lVar9 * 4);
      if (uVar4 == 0) break;
      if (((uVar4 == uVar7) &&
          (puVar2 = (ulong *)(*(long *)(param_2 + 0x38) + (uVar8 * 4 + 7 & 0xfffffffffffffff8) +
                             lVar9 * 0x20), param_3 == *puVar2)) &&
         ((uint)(byte)puVar2[1] == (param_4 & 0xff))) {
        uVar8 = puVar2[2];
        uVar10 = puVar2[3];
        if (uVar10 != 0) {
          plVar1 = (long *)(uVar10 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        *param_1 = uVar8;
        param_1[1] = uVar10;
        lVar9 = *(long *)(uVar8 + 0x18);
        lVar3 = *(long *)(uVar8 + 0x20);
        *(long *)(lVar3 + 0x18) = lVar9;
        *(long *)(lVar9 + 0x20) = lVar3;
        *(MutexType **)(uVar8 + 0x18) = param_2 + 0xb8;
        *(undefined8 *)(uVar8 + 0x20) = *(undefined8 *)(param_2 + 0xd8);
        *(ulong *)(*(long *)(param_2 + 0xd8) + 0x18) = uVar8;
        *(ulong *)(param_2 + 0xd8) = uVar8;
        break;
      }
      lVar3 = 0;
      if (lVar9 + 1U < uVar8) {
        lVar3 = lVar9 + 1;
      }
      uVar10 = uVar10 - 1;
      lVar9 = lVar3;
    } while (uVar10 != 0);
  }
  nn::os::UnlockMutex(param_2);
  return;
}

