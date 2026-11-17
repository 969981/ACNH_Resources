
/* WARNING: Removing unreachable block (ram,0x02a6dca4) */
/* WARNING: Removing unreachable block (ram,0x02a6dc5c) */
/* WARNING: Removing unreachable block (ram,0x02a6dc38) */
/* WARNING: Removing unreachable block (ram,0x02a6dc80) */
/* WARNING: Removing unreachable block (ram,0x02a6dcc8) */

uint FUN_02a6d654(undefined8 param_1,long param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  byte bVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 local_38;
  undefined4 uStack_34;
  
  uVar7 = *param_3;
  if (uVar7 == 0) {
LAB_02a6d79c:
    uVar7 = 0;
  }
  else {
    if ((int)*(uint *)(DAT_05635578 + 0x1e0) < 1) {
      if ((((*(long *)(DAT_05635578 + 0xd0) != 0) &&
           (puVar10 = *(uint **)(*(long *)(DAT_05635578 + 0xd0) + 8), puVar10 != (uint *)0x0)) &&
          ((*(uint *)(DAT_05635578 + 0xe8) <= uVar7 ||
           (*(char *)(*(long *)(DAT_05635578 + 0xf0) + (long)(int)uVar7) != '\0')))) &&
         (((uVar7 < *puVar10 && (puVar10[1] != 0)) && ((ushort)puVar10[2] != 0)))) {
        iVar9 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          iVar9 = 0x1c;
        }
        puVar10 = (uint *)((ulong)(puVar10[1] * uVar7 + (uint)(ushort)puVar10[2] * 8 + iVar9) +
                          (long)puVar10);
        if (puVar10 == (uint *)0x0) {
          uVar7 = 0;
          goto LAB_02a6d7a0;
        }
LAB_02a6d6a4:
        uVar7 = *puVar10;
        if (uVar7 != 0 && puVar10 != (uint *)(ulong)uVar7) {
          puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar7);
          if (((*puVar11 != 0) && (uVar7 = puVar11[1], uVar7 != 0)) &&
             ((ulong)(ushort)puVar11[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar7 != 0) {
                uVar2 = (uint)((ulong)((long)puVar10 - lVar1) / (ulong)uVar7);
              }
              if (*puVar11 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_0560bad8) &&
                 (uVar3 = *(ushort *)(DAT_0560bae0 + (long)(int)uVar2 * 2), uVar7 = (uint)uVar3,
                 uVar3 < 5)) goto LAB_02a6d7a0;
            }
          }
        }
      }
      goto LAB_02a6d79c;
    }
    if (*(uint *)(DAT_05635578 + 0x1e0) <= uVar7) goto LAB_02a6d79c;
    if (*(uint *)(DAT_05635578 + 0x1d0) <= uVar7) {
      uVar7 = 0;
    }
    puVar10 = *(uint **)(*(long *)(DAT_05635578 + 0x1d8) + (ulong)uVar7 * 8);
    uVar7 = 0;
    if (puVar10 != (uint *)0x0) goto LAB_02a6d6a4;
  }
LAB_02a6d7a0:
  uVar2 = uVar7;
  if (4 < uVar7) {
    uVar2 = 0;
  }
  if ((&switchD_02a6d7c8::switchdataD_04a9bda8)[(ulong)uVar2 * 2] == (undefined *)0x0) {
    return 0;
  }
  switch(uVar7) {
  case 1:
    if (param_2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_02b677c0((long)register0x00000008 + -0x14,*param_3);
      if ((uVar7 & 1) != 0) {
        *(uint *)(param_2 + 8) = *param_3;
        *(uint *)(param_2 + 0xc) = param_3[0xc];
        uVar6 = FUN_02b5afe0(0);
        *(undefined2 *)(param_2 + 0x10) = uVar6;
        *(undefined4 *)(param_2 + 0x14) = 2;
        uVar8 = FUN_02b58b90(0);
        *(undefined4 *)(param_2 + 0x18) = uVar8;
        uVar8 = FUN_02b5a7a0(0);
        *(undefined4 *)(param_2 + 0x1c) = uVar8;
        uVar8 = FUN_02b5aaf0(0);
        *(undefined4 *)(param_2 + 0x20) = uVar8;
        uVar8 = FUN_02b5aef0(0);
        *(undefined4 *)(param_2 + 0x24) = uVar8;
        bVar5 = FUN_02b58880();
        *(byte *)(param_2 + 0x28) = bVar5 & 1;
        uVar8 = FUN_02b5a4a0();
        *(undefined4 *)(param_2 + 0x2c) = uVar8;
        bVar5 = FUN_02b5a5c0();
        *(byte *)(param_2 + 0x30) = bVar5 & 1;
        FUN_02b5ae00(&local_38);
        *(undefined4 *)(param_2 + 0x34) = local_38;
        *(undefined4 *)(param_2 + 0x38) = uStack_34;
      }
    }
    return uVar7 & 1;
  case 2:
    if (param_2 == 0) {
      return 0;
    }
    if (param_3[5] == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      if ((param_3[5] == 0x1a) && (((byte)param_3[4] & 1) == 0)) {
        uVar6 = (undefined2)param_3[0xb];
        if (param_3[5] != 0x1a) {
          uVar6 = 0;
        }
        if (((byte)param_3[4] >> 1 & 1) != 0) {
          uVar6 = FUN_02b5be60();
        }
        *(uint *)(param_2 + 8) = *param_3;
        uVar7 = param_3[0xc];
        *(undefined2 *)(param_2 + 0x10) = uVar6;
        *(uint *)(param_2 + 0xc) = uVar7;
        *(int *)(param_2 + 0x14) = (int)(long)((float)(int)param_3[10] * 90.0 * 11930465.0);
        *(uint *)(param_2 + 0x18) = param_3[8];
        *(uint *)(param_2 + 0x1c) = param_3[9];
        iVar9 = FUN_0273ea30((long)register0x00000008 + -0x30);
        uVar7 = 1;
        *(bool *)(param_2 + 0x20) = iVar9 != 0;
      }
    }
    return uVar7;
  case 3:
    if ((param_2 == 0) || (param_3[5] == 0)) {
      return 0;
    }
    uVar7 = 0;
    if ((param_3[5] == 0x1b) && (uVar2 = param_3[4], (uVar2 & 1) == 0)) {
      uVar7 = param_3[5];
      uVar4 = param_3[0xb];
      *(uint *)(param_2 + 8) = *param_3;
      uVar6 = (short)uVar4;
      if (uVar7 != 0x1b) {
        uVar6 = 0;
      }
      uVar7 = param_3[0xc];
      if ((uVar2 & 2) != 0) {
        uVar6 = 5;
      }
      *(undefined2 *)(param_2 + 0x10) = uVar6;
      *(uint *)(param_2 + 0xc) = uVar7;
      iVar9 = FUN_0273ea30((long)register0x00000008 + -0x30);
      uVar7 = 1;
      *(bool *)(param_2 + 0x12) = iVar9 != 0;
    }
    return uVar7;
  case 4:
    if (param_2 == 0) {
      return 0;
    }
    uVar7 = *param_3;
    if (((((uVar7 == 0x1e) || (DAT_05641c34 == uVar7)) || (DAT_05641c38 == uVar7)) ||
        ((DAT_05641c3c == uVar7 || (DAT_05641c40 == uVar7)))) || (DAT_05641c44 == uVar7)) {
      *(uint *)(param_2 + 8) = uVar7;
      *(uint *)(param_2 + 0xc) = param_3[0xc];
      uVar6 = FUN_02b8ee60(*param_3);
      *(undefined2 *)(param_2 + 0x10) = uVar6;
      uVar6 = FUN_02b8f300(*param_3);
      *(undefined2 *)(param_2 + 0x12) = uVar6;
      uVar6 = FUN_02b8f7a0(*param_3);
      *(undefined2 *)(param_2 + 0x14) = uVar6;
      uVar6 = FUN_02b8fc40(*param_3);
      *(undefined2 *)(param_2 + 0x16) = uVar6;
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    return uVar7;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar7 = *param_3;
  if (uVar7 != 0) {
    if ((int)*(uint *)(DAT_05635578 + 0x1e0) < 1) {
      if ((((*(long *)(DAT_05635578 + 0xd0) != 0) &&
           (puVar10 = *(uint **)(*(long *)(DAT_05635578 + 0xd0) + 8), puVar10 != (uint *)0x0)) &&
          ((*(uint *)(DAT_05635578 + 0xe8) <= uVar7 ||
           (*(char *)(*(long *)(DAT_05635578 + 0xf0) + (long)(int)uVar7) != '\0')))) &&
         (((uVar7 < *puVar10 && (puVar10[1] != 0)) && ((ushort)puVar10[2] != 0)))) {
        iVar9 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          iVar9 = 0x1c;
        }
        puVar10 = (uint *)((ulong)(puVar10[1] * uVar7 + (uint)(ushort)puVar10[2] * 8 + iVar9) +
                          (long)puVar10);
        if (puVar10 == (uint *)0x0) {
          uVar7 = 0;
          goto LAB_02a6d938;
        }
        goto LAB_02a6d834;
      }
    }
    else if (uVar7 < *(uint *)(DAT_05635578 + 0x1e0)) {
      if (*(uint *)(DAT_05635578 + 0x1d0) <= uVar7) {
        uVar7 = 0;
      }
      puVar10 = *(uint **)(*(long *)(DAT_05635578 + 0x1d8) + (ulong)uVar7 * 8);
      uVar7 = 0;
      if (puVar10 == (uint *)0x0) goto LAB_02a6d938;
LAB_02a6d834:
      uVar7 = *puVar10;
      if (uVar7 != 0 && puVar10 != (uint *)(ulong)uVar7) {
        puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar7);
        if (((*puVar11 != 0) && (uVar7 = puVar11[1], uVar7 != 0)) &&
           ((ulong)(ushort)puVar11[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar10 - lVar1) / (ulong)uVar7);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_0560bae8) &&
               (uVar3 = *(ushort *)(DAT_0560baf0 + (long)(int)uVar2 * 2), uVar7 = (uint)uVar3,
               uVar3 < 5)) goto LAB_02a6d938;
          }
        }
      }
    }
  }
  uVar7 = 0;
LAB_02a6d938:
  if (4 < uVar7) {
    uVar7 = 0;
  }
  if ((code *)(&PTR_FUN_04a9bdf8)[(ulong)uVar7 * 2] == (code *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(code *)(&PTR_FUN_04a9bdf8)[(ulong)uVar7 * 2])();
  }
  return uVar7 & 1;
}

