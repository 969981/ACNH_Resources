
void FUN_015015e0(undefined8 param_1,float *param_2,long param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *__s;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  char cVar11;
  float fVar12;
  float fVar13;
  undefined *local_98;
  float local_90;
  undefined4 uStack_8c;
  uint *local_88;
  float local_7c;
  undefined4 uStack_78;
  int local_74;
  
  if (param_2 != (float *)0x0) {
    fVar12 = 0.0;
    if ((param_4 & 1) != 0) {
      local_90 = (float)*(int *)(param_3 + 0xc) * 5.0 + 2.5;
      local_98 = (undefined *)CONCAT44(local_98._4_4_,(float)*(int *)(param_3 + 8) * 5.0 + 2.5);
      lVar5 = *(long *)PTR_DAT_04bb27c8;
      if (((lVar5 == 0) || (*(long *)(lVar5 + 0xa8) == 0)) || (*(char *)(lVar5 + 0x11c8) != '\0')) {
        fVar12 = -500.0;
      }
      else {
        fVar12 = (float)FUN_0093a950(lVar5 + 0x28,&local_98,0);
      }
    }
    FUN_01a5033c(&local_7c,param_1,0,param_3,0);
    puVar3 = PTR_DAT_04bb43c0;
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_7c);
    lVar5 = *(long *)puVar3;
    if (lVar5 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_88 = (uint *)0x0;
        local_98 = PTR_DAT_04bc0510 + 0x10;
        local_90 = local_7c;
        uStack_8c = uStack_78;
        uVar4 = FUN_0277d6c4(&local_90);
        if (*(long *)puVar3 != 0) {
          lVar5 = *(long *)(lVar5 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar5 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(&local_7c);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
               (puVar6 = *(uint **)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8),
               puVar6 != (uint *)0x0)) {
              local_88 = puVar6;
            }
          }
        }
        local_74 = FUN_01ae7550(&local_98);
        puVar6 = local_88;
        __s = PTR_DAT_04bbfe90;
        puVar3 = PTR_DAT_04bbfe88;
        if (local_74 - 1U < 6) {
          fVar13 = 0.0;
          if ((local_88 != (uint *)0x0) && (uVar4 = *local_88, uVar4 != 0)) {
            cVar11 = *PTR_DAT_04bbfe88;
            do {
              if (cVar11 == '\0') {
                cVar11 = '\x01';
                *puVar3 = 1;
                memset(__s,0xff,0x1ac);
                uVar4 = *puVar6;
              }
              else {
                uVar2 = *(uint *)(__s + 0xf0);
                if (-1 < (int)uVar2) {
                  if ((float *)((ulong)uVar2 + (long)puVar6) != (float *)0x0) {
                    fVar13 = *(float *)((ulong)uVar2 + (long)puVar6);
                  }
                  break;
                }
                if (uVar2 != 0xffffffff) break;
              }
              puVar7 = (uint *)(ulong)uVar4;
              if ((puVar7 == (uint *)0x0) || (puVar6 == puVar7)) break;
              lVar5 = 0xc;
              if (*(char *)((long)puVar6 + (10 - (long)puVar7)) != '\0') {
                lVar5 = 0x1c;
              }
              lVar5 = (long)puVar6 + (lVar5 - (long)puVar7);
              if (lVar5 == 0) break;
              uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar7));
              *(undefined4 *)(__s + 0xf0) = 0xfffffffe;
              if (uVar8 == 0) break;
              piVar9 = (int *)(lVar5 + 4);
              while (piVar9[-1] != -0x499d99d4) {
                piVar9 = piVar9 + 2;
                uVar8 = uVar8 - 1;
                if (uVar8 == 0) goto LAB_0150188c;
              }
              iVar1 = 0;
              if (*piVar9 != -1) {
                iVar1 = *piVar9;
              }
              *(int *)(__s + 0xf0) = iVar1;
              uVar4 = *puVar6;
              if (uVar4 == 0) break;
            } while( true );
          }
LAB_0150188c:
          *param_2 = fVar12 + fVar13;
        }
      }
    }
  }
  return;
}

