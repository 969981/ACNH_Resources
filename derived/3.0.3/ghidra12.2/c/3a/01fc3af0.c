
undefined8 FUN_01fc3af0(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined2 local_88;
  undefined2 uStack_86;
  undefined4 uStack_84;
  uint local_80;
  uint uStack_7c;
  int local_78;
  undefined4 local_64;
  
  if (2 < *(int *)(*(long *)(param_1 + 8) + 0x750) - 1U) {
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    FUN_0194a710(&local_88,0);
    puVar2 = PTR_DAT_04bb3238;
    if (local_78 != 5) {
      fVar11 = 3.4028235e+38;
      lVar7 = 0;
      do {
        lVar3 = FUN_0194b7fc(&local_88);
        if (lVar3 != 0) {
          local_64 = *(undefined4 *)(lVar3 + 0x230);
          uVar4 = FUN_02201dc0(&local_64,lVar8 + 0x278);
          if ((uVar4 & 1) != 0) {
            switch(local_78) {
            case 0:
              lVar5 = CONCAT44(uStack_84,CONCAT22(uStack_86,local_88));
              uVar1 = local_80;
              if (*(uint *)(lVar5 + 0x288) <= local_80) {
                uVar1 = 0;
              }
              lVar5 = *(long *)(lVar5 + 0x290) + (long)(int)uVar1 * 0x30;
              uVar1 = uStack_7c;
              if (*(uint *)(lVar5 + 0x10) <= uStack_7c) {
                uVar1 = 0;
              }
              puVar6 = (undefined4 *)(*(long *)(lVar5 + 0x18) + (long)(int)uVar1 * 4);
              break;
            case 1:
              puVar6 = (undefined4 *)(CONCAT44(uStack_84,CONCAT22(uStack_86,local_88)) + 2000);
              break;
            case 2:
              puVar6 = (undefined4 *)(CONCAT44(uStack_84,CONCAT22(uStack_86,local_88)) + 0x860);
              break;
            case 3:
              puVar6 = (undefined4 *)(CONCAT44(uStack_84,CONCAT22(uStack_86,local_88)) + 0x8c4);
              break;
            case 4:
              puVar6 = (undefined4 *)(CONCAT44(uStack_84,CONCAT22(uStack_86,local_88)) + 0x8c8);
              break;
            default:
              puVar6 = (undefined4 *)puVar2;
            }
            local_64 = *puVar6;
            uVar4 = FUN_02087ce0(*(undefined8 *)(*(long *)(param_1 + 8) + 0x3c0),&local_64,0);
            if ((uVar4 & 1) != 0) {
              fVar9 = *(float *)(*(long *)(lVar3 + 0x68) + 0x278) - *(float *)(lVar8 + 0x278);
              fVar10 = *(float *)(*(long *)(lVar3 + 0x68) + 0x280) - *(float *)(lVar8 + 0x280);
              fVar9 = fVar10 * fVar10 + fVar9 * fVar9;
              if (fVar9 <= fVar11) {
                lVar7 = lVar3;
                fVar11 = fVar9;
              }
            }
          }
        }
        FUN_0194afc0(&local_88);
      } while (local_78 != 5);
      if (lVar7 != 0) {
        uStack_86 = 0;
        uStack_84 = 0;
        local_88 = (undefined2)*(undefined4 *)(lVar7 + 0x2b8);
        FUN_0277d4ac(&local_88);
        *param_2 = CONCAT22(uStack_86,local_88);
        param_2[1] = uStack_84;
        *param_3 = *(undefined4 *)(lVar7 + 0x230);
        return 1;
      }
    }
  }
  return 0;
}

