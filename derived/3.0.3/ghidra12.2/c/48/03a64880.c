
void FUN_03a64880(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  
  lVar2 = *(long *)(param_1 + 0x280);
  if ((((lVar2 != 0) && (*(char *)(*(long *)(param_1 + 8) + 0x910) != '\0')) &&
      (*(int *)(lVar2 + 0x20f0) != 0)) &&
     ((3 < *(uint *)(lVar2 + 0x20f4) || *(uint *)(lVar2 + 0x20f4) == 2 &&
      (*(int *)(lVar2 + 0xb98) != 0)))) {
    lVar5 = *(long *)(param_3 + 0x318);
    lVar10 = (long)*(int *)(lVar2 + 0xb98) << 3;
    bVar1 = *(byte *)(param_3 + 8);
    uVar6 = *(undefined8 *)(param_3 + 800);
    puVar9 = *(undefined8 **)(lVar2 + 0xba0);
    uVar7 = *(undefined8 *)(lVar5 + 0x60);
    do {
      plVar8 = (long *)*puVar9;
      if ((char)plVar8[0xb] != '\0') {
        uVar3 = (uint)bVar1;
        uVar4 = uVar3;
        if (*(uint *)(plVar8 + 0x22) <= (uint)bVar1) {
          uVar4 = 0;
        }
        if (*(char *)(plVar8[0x23] + (ulong)uVar4 * 0x2f0 + 0xb4) != '\0') {
          FUN_03a29d50(plVar8 + 0x2e,param_2,uVar3,uVar7);
          uVar4 = (uint)bVar1;
          if (*(uint *)(plVar8 + 0x22) < uVar3 || *(uint *)(plVar8 + 0x22) == uVar4) {
            uVar4 = 0;
          }
          (**(code **)(*plVar8 + 0x108))
                    (plVar8,param_2,uVar3,lVar5,uVar6,plVar8[0x23] + (ulong)uVar4 * 0x2f0,
                     plVar8 + 0x2e);
        }
      }
      puVar9 = puVar9 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  return;
}

