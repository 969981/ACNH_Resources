
void FUN_01afc400(undefined8 *param_1,long param_2,ulong param_3,uint param_4,undefined1 param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  uint *puVar8;
  ushort uVar9;
  uint *puVar10;
  
  if ((0x22 < ((uint)param_3 & 0xff)) ||
     (uVar1 = (uint)(param_3 >> 8), (uint)(byte)PTR_DAT_04bc27f0[param_3 & 0xff] < (uVar1 & 0xff)))
  goto LAB_01afc650;
  if ((*(uint *)(PTR_DAT_04bc2a20 + (param_3 & 0xff) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0)
  goto LAB_01afc650;
  iVar7 = FUN_0277d6c4(param_2 + 8);
  if (iVar7 != 0x3100) {
    puVar8 = *(uint **)(param_2 + 0x10);
    if (puVar8 == (uint *)0x0) {
      uVar9 = 0xbc;
    }
    else {
      uVar4 = *puVar8;
      uVar9 = 0;
      if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
        puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
        uVar9 = 0;
        if (*puVar10 != 0) {
          uVar4 = puVar10[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar2 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar2 = 0x1c;
            }
            lVar2 = (long)puVar10 + lVar2 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar2 != 0) {
              uVar3 = 0;
              if ((ulong)uVar4 != 0) {
                uVar3 = (uint)((ulong)((long)puVar8 - lVar2) / (ulong)uVar4);
              }
              if (*puVar10 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (uVar9 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar9 < 0xbd))
              goto LAB_01afc52c;
            }
          }
          uVar9 = 0;
        }
      }
    }
LAB_01afc52c:
    if (uVar9 != 0x7f) goto LAB_01afc650;
  }
  iVar7 = FUN_0277d6c4(param_2 + 8);
  if (iVar7 == 0x3100) goto LAB_01afc608;
  puVar8 = *(uint **)(param_2 + 0x10);
  if (puVar8 == (uint *)0x0) {
    uVar9 = 0xbc;
  }
  else {
    uVar4 = *puVar8;
    uVar9 = 0;
    if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
      puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
      uVar9 = 0;
      if (*puVar10 != 0) {
        uVar4 = puVar10[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar10 + lVar2 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar2 != 0) {
            uVar3 = 0;
            if ((ulong)uVar4 != 0) {
              uVar3 = (uint)((ulong)((long)puVar8 - lVar2) / (ulong)uVar4);
            }
            if (*puVar10 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar9 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar9 < 0xbd))
            goto LAB_01afc5f4;
          }
        }
        uVar9 = 0;
      }
    }
  }
LAB_01afc5f4:
  if (uVar9 != 0x7f) {
LAB_01afc650:
    *param_1 = 0x16a1;
    FUN_0277d4ac(param_1);
    return;
  }
LAB_01afc608:
  uVar6 = *(undefined2 *)(param_2 + 8);
  *(undefined1 *)(param_2 + 0xb) = param_5;
  uVar5 = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)((long)param_1 + 3) = param_5;
  uVar1 = (uint)param_3 << 0x18 | param_4 & 0xffff | (uVar1 & 0xff) << 0x10;
  *(undefined2 *)param_1 = uVar6;
  *(undefined1 *)((long)param_1 + 2) = uVar5;
  *(uint *)(param_2 + 0xc) = uVar1;
  *(uint *)((long)param_1 + 4) = uVar1;
  return;
}

