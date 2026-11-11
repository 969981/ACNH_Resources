
void FUN_004d6800(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  lVar3 = FUN_004dcbb0((long *)(param_2 + 0x28),param_4);
  if ((lVar3 != 0) &&
     (iVar1 = *(int *)(*(long *)(param_2 + 0x28) + (long)*(int *)(lVar3 + 4) * 8 + 4), -1 < iVar1))
  {
    iVar2 = *(int *)(*(long *)(param_2 + 0x18) + (long)iVar1 * 0x10 + 8);
    if (0 < iVar2) {
      plVar4 = *(long **)(*(long *)(param_2 + 0x18) + (long)iVar1 * 0x10);
      uVar5 = 0;
      if (*param_3 == 0) {
        plVar6 = plVar4;
        do {
          if (*plVar6 == 0) goto LAB_004d68d4;
          uVar5 = uVar5 + 1;
          plVar6 = plVar6 + 6;
        } while ((long)uVar5 < (long)iVar2);
      }
      else {
        plVar6 = plVar4 + 1;
        do {
          if ((plVar6[-1] == *param_3) && (*plVar6 == param_3[1])) {
LAB_004d68d4:
            uVar5 = uVar5 & 0xffffffff;
            lVar3 = plVar4[uVar5 * 6 + 4];
            *param_1 = plVar4[uVar5 * 6 + 3];
            param_1[1] = lVar3;
            uVar5 = plVar4[uVar5 * 6 + 5];
            param_1[2] = uVar5;
            if ((uVar5 & 1) == 0) {
              return;
            }
            FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
            return;
          }
          uVar5 = uVar5 + 1;
          plVar6 = plVar6 + 6;
        } while ((long)uVar5 < (long)iVar2);
      }
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

