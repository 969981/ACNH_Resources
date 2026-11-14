
/* WARNING: Removing unreachable block (ram,0x01dba404) */

void FUN_01dba340(long param_1,byte *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  byte local_5c [4];
  undefined4 local_58 [6];
  long local_28;
  
  local_5c[0] = *param_2;
  if (7 < local_5c[0]) {
    local_5c[0] = 0xff;
  }
  lVar4 = FUN_025830c0(DAT_055021a0,local_5c,1);
  if (lVar4 != 0) {
    lVar7 = lVar4 + 0x194b0;
    if (*(long *)(lVar4 + 0x194b8) == 0) {
      lVar7 = *(long *)(DAT_05574040 + 0x20);
    }
    bVar1 = true;
    if ((*(long **)(lVar7 + 0x2aca0) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar7 + 0x2aca0), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    local_58[0] = 1;
    lVar4 = *(long *)(lVar7 + 0x2ac88) + *(long *)(lVar7 + 0x2ac80);
    uStack_70 = *(undefined8 *)(lVar4 + 0x20);
    local_68 = *(undefined8 *)(lVar4 + 0x28);
    local_78 = *(undefined8 *)(lVar4 + 0x18);
    iVar3 = nn::time::GetStandardSteadyClockCurrentTimePoint((SteadyClockTimePoint *)local_58);
    if ((((iVar3 == 0) &&
         (iVar3 = nn::time::GetElapsedSecondsBetween
                            (&local_28,(SteadyClockTimePoint *)&local_78,
                             (SteadyClockTimePoint *)local_58), iVar3 == 0)) && (-1 < local_28)) &&
       (local_28 * 1000000000 < 3600000000000)) {
      bVar1 = false;
    }
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar7 + 0x2aca0) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x2aca0) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (((bVar1) && (*(int *)(param_1 + 0x84f4) == -1)) &&
       (uVar6 = FUN_01db9aa8(param_1,param_2,0), (uVar6 & 1) != 0)) {
      bVar8 = *param_2;
      *(undefined1 *)(param_1 + 0x8500) = 1;
      *(undefined8 *)(param_1 + 0x84f4) = 0xc00000002;
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      *(byte *)(param_1 + 0x84f1) = bVar8;
      DAT_0537c938 = 0;
      puVar5 = *(undefined8 **)(param_1 + 0x84c8);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0;
        *(undefined8 *)(param_1 + 0x84c8) = 0;
      }
      *(undefined2 *)(param_1 + 0x8506) = 0x101;
      FUN_01dba640(param_1);
    }
  }
  return;
}

