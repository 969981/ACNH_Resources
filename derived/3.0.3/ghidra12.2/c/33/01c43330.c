
void FUN_01c43330(long param_1,undefined4 *param_2,uint param_3)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  int *piVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  
  if (((param_2 != (undefined4 *)0x0) &&
      (uVar4 = (param_3 & 0xffff) - (uint)*(ushort *)(param_1 + 0x200),
      uVar4 < *(uint *)(param_1 + 0x1e0))) &&
     (puVar8 = *(uint **)(*(long *)(param_1 + 0x1e8) + (long)(int)uVar4 * 8), puVar8 != (uint *)0x0)
     ) {
    uVar4 = *puVar8;
    if (uVar4 != 0) {
      cVar9 = DAT_0534cd78;
      do {
        if (cVar9 == '\0') {
          DAT_0534cd7c = 0xffffffffffffffff;
          DAT_0534cd84 = 0xffffffffffffffff;
          cVar9 = '\x01';
          DAT_0534cdac = 0xffffffff;
          DAT_0534cd78 = '\x01';
          DAT_0534cd8c = 0xffffffffffffffff;
          DAT_0534cd94 = 0xffffffffffffffff;
          DAT_0534cd9c = 0xffffffffffffffff;
          DAT_0534cda4 = 0xffffffffffffffff;
          uVar4 = *puVar8;
        }
        else {
          if (-1 < (int)DAT_0534cd7c) {
            pfVar1 = (float *)((DAT_0534cd7c & 0xffffffff) + (long)puVar8);
            if (pfVar1 != (float *)0x0) {
              uVar6 = (undefined4)(long)(*pfVar1 * 11930465.0);
              goto LAB_01c43460;
            }
            break;
          }
          if ((int)DAT_0534cd7c != -1) break;
        }
        puVar5 = (uint *)(ulong)uVar4;
        uVar6 = 0;
        if ((puVar5 == (uint *)0x0) || (uVar6 = 0, puVar8 == puVar5)) goto LAB_01c43460;
        lVar3 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar5)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar8 + (lVar3 - (long)puVar5);
        uVar6 = 0;
        if (lVar3 == 0) goto LAB_01c43460;
        uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar5));
        DAT_0534cd7c._4_4_ = (undefined4)(DAT_0534cd7c >> 0x20);
        DAT_0534cd7c = CONCAT44(DAT_0534cd7c._4_4_,0xfffffffe);
        if (uVar10 == 0) break;
        piVar7 = (int *)(lVar3 + 4);
        while (piVar7[-1] != 0x2c40799e) {
          piVar7 = piVar7 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_01c4345c;
        }
        iVar2 = 0;
        if (*piVar7 != -1) {
          iVar2 = *piVar7;
        }
        DAT_0534cd7c = CONCAT44(DAT_0534cd7c._4_4_,iVar2);
        uVar4 = *puVar8;
        if (uVar4 == 0) break;
      } while( true );
    }
LAB_01c4345c:
    uVar6 = 0;
LAB_01c43460:
    *param_2 = uVar6;
  }
  return;
}

