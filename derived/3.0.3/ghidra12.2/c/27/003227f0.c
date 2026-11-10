
void FUN_003227f0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  bool bVar12;
  float fVar13;
  
  if (*(char *)(param_1 + 0x1e) == '\0') {
    lVar11 = *(long *)(param_1 + 0x280);
    uVar8 = 0x40;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x26c);
    if (iVar9 < *(int *)(param_1 + 0x268)) {
      lVar11 = *(long *)(param_1 + 0x160);
      if (lVar11 == 0) {
LAB_00322900:
        puVar10 = (undefined8 *)(*(long *)(param_1 + 0x260) + (long)iVar9 * 0x60);
        uVar8 = *param_2;
        uVar3 = param_2[1];
        uVar4 = param_2[3];
        puVar10[2] = param_2[2];
        *puVar10 = uVar8;
        uVar8 = param_2[4];
        uVar5 = param_2[5];
        uVar2 = param_2[6];
        uVar6 = param_2[7];
        puVar10[1] = uVar3;
        puVar10[3] = uVar4;
        puVar10[4] = uVar8;
        puVar10[6] = uVar2;
        puVar10[7] = uVar6;
        puVar10[5] = uVar5;
        *(undefined8 *)(*(long *)(param_1 + 0x260) + (long)iVar9 * 0x60 + 0x50) = param_4;
        *(undefined1 *)(*(long *)(param_1 + 0x260) + (long)iVar9 * 0x60 + 0x5c) = 1;
        *(undefined4 *)(*(long *)(param_1 + 0x260) + (long)iVar9 * 0x60 + 0x58) =
             *(undefined4 *)(param_1 + 0x5c);
        lVar11 = *(long *)(param_1 + 0x260) + (long)iVar9 * 0x60;
        *(undefined8 *)(lVar11 + 0x48) = param_3[1];
        *(undefined8 *)(lVar11 + 0x40) = *param_3;
        *(int *)(param_1 + 0x26c) = *(int *)(param_1 + 0x26c) + 1;
      }
      else {
        bVar12 = false;
        do {
          while( true ) {
            fVar13 = *(float *)(param_1 + 0x5c);
            uVar7 = FUN_0031e3f4(lVar11);
            if (*(char *)(*(long *)(lVar11 + 0xa0) + 0x792) == '\0') break;
LAB_00322840:
            lVar11 = *(long *)(lVar11 + 0x80);
            if (lVar11 == 0) {
              if (bVar12) {
                return;
              }
              iVar9 = *(int *)(param_1 + 0x26c);
              goto LAB_00322900;
            }
          }
          pfVar1 = (float *)(*(long *)(lVar11 + 0xa0) + 0x848);
          if ((uVar7 & 1) == 0) {
            pfVar1 = (float *)(lVar11 + 0x6cc);
          }
          if (*(int *)(lVar11 + 0x2c) + (int)(*(float *)(lVar11 + 0x5c) * fVar13 * *pfVar1) <=
              *(int *)(lVar11 + 0x24)) goto LAB_00322840;
          FUN_0032c600(**(long **)(lVar11 + 0x4d0) + 0x14,lVar11,0x200);
          lVar11 = *(long *)(lVar11 + 0x80);
          bVar12 = true;
        } while (lVar11 != 0);
      }
      return;
    }
    lVar11 = *(long *)(param_1 + 0x280);
    uVar8 = 0x100;
  }
  FUN_0032c600(lVar11 + 0x14,param_1,uVar8);
  return;
}

