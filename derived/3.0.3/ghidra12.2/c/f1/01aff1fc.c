
ulong FUN_01aff1fc(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint local_4;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 != 3) {
    iVar4 = FUN_01ad7260(param_1);
    if ((iVar4 == 0) && (uVar5 = FUN_01afcfa0(param_1), (int)uVar5 == 0)) {
      return uVar5;
    }
    puVar7 = *(uint **)(param_1 + 0x10);
    if (puVar7 == (uint *)0x0) {
      uVar6 = 0xbc;
    }
    else {
      uVar2 = *puVar7;
      uVar6 = 0;
      if ((uVar2 != 0) && (puVar7 != (uint *)(ulong)uVar2)) {
        puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar2);
        uVar6 = 0;
        if (*puVar8 != 0) {
          uVar6 = puVar8[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar6 != 0) {
                uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar6);
              }
              if (*puVar8 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar6 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar6 < 0xbd))
              goto LAB_01aff4bc;
            }
          }
          uVar6 = 0;
        }
      }
    }
LAB_01aff4bc:
    if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
      if ((((*(long *)(DAT_0532a778 + 0xb0) != 0) &&
           (puVar7 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar7 != (uint *)0x0)) &&
          ((*(uint *)(DAT_0532a778 + 200) <= uVar6 ||
           (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar6) != '\0')))) &&
         (((uVar6 < *puVar7 && (puVar7[1] != 0)) && ((ushort)puVar7[2] != 0)))) {
        iVar4 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          iVar4 = 0x1c;
        }
        puVar7 = (uint *)((ulong)(puVar7[1] * uVar6 + (uint)(ushort)puVar7[2] * 8 + iVar4) +
                         (long)puVar7);
        goto joined_r0x01aff5f0;
      }
    }
    else if (uVar6 < *(uint *)(DAT_0532a778 + 0x1c0)) {
      if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar6) {
        uVar6 = 0;
      }
      puVar7 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar6 * 8);
joined_r0x01aff5f0:
      local_4 = 0;
      if (puVar7 == (uint *)0x0) goto LAB_01aff600;
      local_4 = 0;
      uVar6 = *puVar7;
      if ((uVar6 == 0) || (puVar7 == (uint *)(ulong)uVar6)) goto LAB_01aff600;
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
      local_4 = 0;
      if (*puVar8 == 0) goto LAB_01aff600;
      uVar6 = puVar8[1];
      if ((uVar6 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar6 != 0) {
            uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar6);
          }
          if (*puVar8 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05327160) &&
             (local_4 = (uint)*(ushort *)(DAT_05327168 + (long)(int)uVar2 * 2), local_4 < 6))
          goto LAB_01aff600;
        }
      }
    }
    local_4 = 0;
    goto LAB_01aff600;
  }
  puVar7 = *(uint **)(param_1 + 0x10);
  if (puVar7 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar2 = *puVar7;
    uVar6 = 0;
    if ((uVar2 != 0) && (puVar7 != (uint *)(ulong)uVar2)) {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar2);
      uVar6 = 0;
      if (*puVar8 != 0) {
        uVar6 = puVar8[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar6 != 0) {
              uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar6);
            }
            if (*puVar8 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar6 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar6 < 0xbd))
            goto LAB_01aff378;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_01aff378:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) != 0) &&
         (puVar7 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar7 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a778 + 200) <= uVar6 ||
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar6) != '\0')))) &&
       (((uVar6 < *puVar7 && (puVar7[1] != 0)) && ((ushort)puVar7[2] != 0)))) {
      iVar4 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        iVar4 = 0x1c;
      }
      puVar7 = (uint *)((ulong)(puVar7[1] * uVar6 + (uint)(ushort)puVar7[2] * 8 + iVar4) +
                       (long)puVar7);
      if (puVar7 == (uint *)0x0) {
        local_4 = 0;
        goto LAB_01aff600;
      }
      goto LAB_01aff3b4;
    }
  }
  else if (uVar6 < *(uint *)(DAT_0532a778 + 0x1c0)) {
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar6) {
      uVar6 = 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar6 * 8);
    local_4 = 0;
    if (puVar7 == (uint *)0x0) goto LAB_01aff600;
LAB_01aff3b4:
    uVar6 = *puVar7;
    if (uVar6 != 0 && puVar7 != (uint *)(ulong)uVar6) {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
      if (((*puVar8 != 0) && (uVar6 = puVar8[1], uVar6 != 0)) && ((ulong)(ushort)puVar8[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar6 != 0) {
            uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar6);
          }
          if (*puVar8 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05327160) &&
             (uVar3 = *(ushort *)(DAT_05327168 + (long)(int)uVar2 * 2), local_4 = (uint)uVar3,
             uVar3 < 6)) goto LAB_01aff600;
        }
      }
    }
  }
  local_4 = 0;
LAB_01aff600:
  return (ulong)(param_2 == local_4);
}

