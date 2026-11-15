
undefined8 FUN_01ea7860(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar4 = PTR_PTR_04bb2238;
  lVar11 = *(long *)(param_1 + 0x8368);
  if (lVar11 != param_1 + 0x8360) {
    puVar10 = (undefined8 *)(lVar11 + -0x138);
    do {
      if (*(char *)puVar10[6] == '\0') {
LAB_01ea78c4:
        uVar6 = (**(code **)*puVar10)(puVar10,param_2,param_3);
        if ((uVar6 & 1) != 0) {
          *(undefined8 **)(param_1 + 0x8768) = puVar10;
          *(undefined8 *)(param_1 + 0x8770) = *param_3;
          return 1;
        }
      }
      else {
        FUN_01ea5c80(param_1,puVar4,puVar10 + 5,0,1,param_2);
        uVar5 = FUN_006bd550("CheckRobResult",0);
        uVar3 = *(uint *)(param_1 + 0x20);
        if (uVar3 != 0) {
          lVar7 = *(long *)(param_1 + 0x28);
          if ((int)uVar3 < 2) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            iVar9 = uVar3 - 1;
            do {
              uVar1 = iVar9 + uVar8;
              if ((int)uVar1 < 0 != SCARRY4(iVar9,uVar8)) {
                uVar1 = uVar1 + 1;
              }
              uVar2 = (int)uVar1 >> 1;
              uVar1 = *(uint *)(lVar7 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
              if (uVar1 == uVar5) goto joined_r0x01ea79a0;
              if (uVar1 < uVar5) {
                uVar8 = uVar2 + 1;
              }
              else {
                iVar9 = uVar2 - 1;
              }
            } while ((int)uVar8 < iVar9);
          }
          uVar2 = uVar8;
          if (*(uint *)(lVar7 + (long)(int)uVar8 * 0x20 + 0x18) == uVar5) {
joined_r0x01ea79a0:
            if (-1 < (int)uVar2) {
              if (uVar3 <= uVar2) {
                uVar2 = 0;
              }
              if (*(int *)(lVar7 + (ulong)uVar2 * 0x20) != 0) goto LAB_01ea78c4;
            }
          }
        }
      }
      lVar11 = *(long *)(lVar11 + 8);
      puVar10 = (undefined8 *)(lVar11 + -0x138);
    } while (puVar10 != (undefined8 *)(param_1 + 0x8228));
  }
  return 0;
}

