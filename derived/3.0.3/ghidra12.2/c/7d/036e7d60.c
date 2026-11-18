
void FUN_036e7d60(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ushort uVar9;
  
  if (param_2 != 0) {
    if (*(long **)(param_2 + 0x28) == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      puVar7 = (undefined8 *)**(long **)(param_2 + 0x28);
      uVar8 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        uVar8 = (**(code **)*puVar7)();
      }
    }
    uVar9 = *(ushort *)(*(long *)(param_2 + 0x10) + *(long *)(param_2 + 8) + 0x153c);
    if ((((uVar8 & 1) != 0) && (*(long *)(param_2 + 0x28) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(param_2 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if ((uVar9 & 1) != 0) {
      if (*(long **)(param_2 + 0x3a8) == (long *)0x0) {
        uVar8 = 0;
      }
      else {
        puVar7 = (undefined8 *)**(long **)(param_2 + 0x3a8);
        uVar8 = 0;
        if (puVar7 != (undefined8 *)0x0) {
          uVar8 = (**(code **)*puVar7)();
        }
      }
      pbVar3 = (byte *)(*(long *)(param_2 + 0x390) + *(long *)(param_2 + 0x388));
      uVar6 = (uint)*pbVar3;
      if (2 < uVar6) {
        uVar6 = 3;
      }
      iVar1 = uVar6 * 2 + 4;
      if (3 < uVar6) {
        iVar1 = 0;
      }
      uVar6 = (uint)pbVar3[1];
      if (2 < uVar6) {
        uVar6 = 3;
      }
      iVar2 = uVar6 * 2 + 4;
      if (3 < uVar6) {
        iVar2 = 0;
      }
      *param_1 = iVar1;
      param_1[1] = iVar2;
      if ((((uVar8 & 1) != 0) && (*(long *)(param_2 + 0x3a8) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(param_2 + 0x3a8) + 8), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
      }
      if ((*(long **)(param_2 + 0x140) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(param_2 + 0x140), puVar7 == (undefined8 *)0x0)) {
        *(byte *)(param_1 + 2) =
             *(byte *)(*(long *)(param_2 + 0x128) + *(long *)(param_2 + 0x120) + 0x20) & 1;
      }
      else {
        uVar8 = (**(code **)*puVar7)();
        *(byte *)(param_1 + 2) =
             *(byte *)(*(long *)(param_2 + 0x128) + *(long *)(param_2 + 0x120) + 0x20) & 1;
        if ((((uVar8 & 1) != 0) && (*(long *)(param_2 + 0x140) != 0)) &&
           (puVar7 = *(undefined8 **)(*(long *)(param_2 + 0x140) + 8), puVar7 != (undefined8 *)0x0))
        {
          (**(code **)*puVar7)();
        }
      }
      if ((*(long **)(param_2 + 0x28) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(param_2 + 0x28), puVar7 == (undefined8 *)0x0)) {
        bVar4 = *(byte *)(*(long *)(param_2 + 0x10) + *(long *)(param_2 + 8) + 0x153e);
        uVar9 = (ushort)bVar4;
        *(ushort *)((long)param_1 + 10) = (ushort)bVar4;
      }
      else {
        uVar8 = (**(code **)*puVar7)();
        bVar4 = *(byte *)(*(long *)(param_2 + 0x10) + *(long *)(param_2 + 8) + 0x153e);
        uVar9 = (ushort)bVar4;
        *(ushort *)((long)param_1 + 10) = (ushort)bVar4;
        if ((((uVar8 & 1) != 0) && (*(long *)(param_2 + 0x28) != 0)) &&
           (puVar7 = *(undefined8 **)(*(long *)(param_2 + 0x28) + 8), puVar7 != (undefined8 *)0x0))
        {
          (**(code **)*puVar7)();
          uVar9 = *(ushort *)((long)param_1 + 10);
        }
      }
      *(bool *)((long)param_1 + 9) = uVar9 != 0;
      if ((*(long **)(param_2 + 0x610) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(param_2 + 0x610), puVar7 == (undefined8 *)0x0)) {
        uVar6 = 1;
      }
      else {
        uVar6 = (**(code **)*puVar7)();
        uVar6 = uVar6 ^ 1;
      }
      *(byte *)((long)param_1 + 0xd) =
           *(byte *)(*(long *)(param_2 + 0x5f8) + *(long *)(param_2 + 0x5f0) + 3) & 1;
      sVar5 = *(short *)(*(long *)(param_2 + 0x5f8) + *(long *)(param_2 + 0x5f0));
      *(short *)((long)param_1 + 0xe) = sVar5;
      *(bool *)(param_1 + 3) = sVar5 != 0;
      if ((((uVar6 & 1) == 0) && (*(long *)(param_2 + 0x610) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(param_2 + 0x610) + 8), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
      }
      if ((*(long **)(param_2 + 0x648) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(param_2 + 0x648), puVar7 == (undefined8 *)0x0)) {
        uVar6 = 1;
      }
      else {
        uVar6 = (**(code **)*puVar7)();
        uVar6 = uVar6 ^ 1;
      }
      sVar5 = *(short *)(*(long *)(param_2 + 0x630) + *(long *)(param_2 + 0x628));
      *(short *)((long)param_1 + 0x12) = sVar5;
      *(bool *)(param_1 + 4) = sVar5 != 0;
      if ((((uVar6 & 1) == 0) && (*(long *)(param_2 + 0x648) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(param_2 + 0x648) + 8), puVar7 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x036e8054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar7)();
        return;
      }
    }
  }
  return;
}

