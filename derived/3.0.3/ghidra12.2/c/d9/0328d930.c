
void FUN_0328d930(long param_1,long *param_2,byte param_3,ulong param_4,uint param_5,uint param_6,
                 long param_7)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ushort uVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  long *plVar12;
  
  if ((param_4 & 1) != 0) {
    lVar4 = FUN_032d3740(*(undefined8 *)(param_2[4] + 0x18));
    if (lVar4 == 0) {
LAB_0328da24:
      lVar4 = *(long *)(param_2[4] + 0x18);
    }
    else {
      plVar7 = (long *)(*(long *)(param_1 + 0x18) + 0x110);
      uVar6 = *(ulong *)(*(long *)(lVar4 + 0xe8) + 0x30);
      while( true ) {
        while( true ) {
          lVar4 = *plVar7;
          if (*(ulong *)(lVar4 + 0x20) <= uVar6) break;
          plVar7 = (long *)(lVar4 + 8);
        }
        if (uVar6 <= *(ulong *)(lVar4 + 0x20)) break;
        plVar7 = (long *)(lVar4 + 0x10);
      }
      pcVar10 = *(char **)(lVar4 + 0x28);
      if (pcVar10 != "Inherit") {
        if (*pcVar10 == 'I') {
          uVar6 = 0;
          do {
            uVar9 = uVar6;
            if ((uVar9 == 0x80000) || (pcVar10[uVar9 + 1] != "Inherit"[uVar9 + 1]))
            goto LAB_0328da24;
            uVar6 = uVar9 + 1;
          } while (pcVar10[uVar9 + 1] != '\0');
          if (uVar9 >> 0x13 == 0) goto LAB_0328da10;
        }
        goto LAB_0328da24;
      }
LAB_0328da10:
      lVar4 = FUN_032d3740(*(undefined8 *)(param_2[4] + 0x18));
    }
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe | param_3 & 1;
  }
  if ((param_5 & 1) == 0) goto joined_r0x0328db24;
  lVar4 = param_2[0x85];
  if ((param_3 & 1) != 0) {
    if ((lVar4 != 0) && (plVar7 = (long *)(lVar4 + 8), *plVar7 == 0)) {
      plVar12 = (long *)(param_7 + 0x58);
      plVar5 = (long *)*plVar12;
      if ((long *)*plVar12 == (long *)0x0) {
        *plVar12 = (long)plVar7;
        *plVar7 = (long)plVar12;
      }
      else {
        do {
          plVar12 = plVar5;
          plVar5 = (long *)plVar12[2];
        } while ((long *)plVar12[2] != (long *)0x0);
        plVar12[2] = (long)plVar7;
        *(long **)(lVar4 + 0x10) = plVar12;
        *plVar7 = *plVar12;
      }
    }
    goto joined_r0x0328db24;
  }
  if ((lVar4 == 0) || (plVar7 = (long *)(lVar4 + 8), *plVar7 == 0)) goto joined_r0x0328db24;
  if (*(long *)(param_7 + 0x18) == lVar4) {
    plVar5 = *(long **)(param_7 + 0x138);
    *(undefined8 *)(param_7 + 0x18) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5,lVar4,0);
    }
    *(long *)(param_7 + 0x48) = param_7 + 0x28;
    *(long *)(param_7 + 0x50) = param_7 + 0x28;
LAB_0328daf4:
    *(undefined8 *)(param_7 + 0x60) = 0;
  }
  else if (*(long *)(param_7 + 0x60) == lVar4) goto LAB_0328daf4;
  lVar2 = *(long *)(lVar4 + 0x10);
  lVar1 = *(long *)(lVar4 + 0x18);
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *plVar7 = 0;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  if (*(long **)(param_7 + 0x58) == plVar7) {
    *(long *)(param_7 + 0x58) = lVar1;
  }
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = lVar2;
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = lVar1;
  }
joined_r0x0328db24:
  if ((param_6 & 1) == 0) {
    return;
  }
  FUN_032883c0(param_2,param_3 & 1);
  FUN_0328a0b0(param_2,6,1,param_3 & 1);
  if ((param_3 & 1) == 0) {
    if (((*(ushort *)(param_2 + 0xaf) >> 5 & 1) == 0) ||
       ((*(ushort *)(param_2 + 0xaf) >> 4 & 1) == 0)) {
      uVar8 = *(ushort *)(param_2 + 0x4a) | 0x200;
    }
    else {
      uVar8 = *(ushort *)(param_2 + 0x4a) & 0xfdff;
    }
    *(ushort *)(param_2 + 0x4a) = uVar8;
    plVar7 = DAT_0572baa0;
    plVar5 = param_2 + 1;
    if (*plVar5 != 0) {
      lVar4 = param_2[2];
      lVar2 = param_2[3];
      param_2[3] = 0;
      *plVar5 = 0;
      param_2[2] = 0;
      if ((long *)*plVar7 == plVar5) {
        *plVar7 = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar2;
      }
    }
    lVar4 = 6;
  }
  else {
    plVar5 = param_2 + 1;
    *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) & 0xfdff;
    plVar7 = DAT_0572baa0;
    if (*plVar5 == 0) {
      puVar3 = (undefined8 *)*DAT_0572baa0;
      if ((undefined8 *)*DAT_0572baa0 == (undefined8 *)0x0) {
        *DAT_0572baa0 = (long)plVar5;
      }
      else {
        do {
          puVar11 = puVar3;
          puVar3 = (undefined8 *)puVar11[2];
        } while ((undefined8 *)puVar11[2] != (undefined8 *)0x0);
        puVar11[2] = plVar5;
        param_2[2] = (long)puVar11;
        plVar7 = (long *)*puVar11;
      }
      *plVar5 = (long)plVar7;
    }
    lVar4 = 5;
  }
                    /* WARNING: Could not recover jumptable at 0x0328dc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + lVar4 * 8))(param_2);
  return;
}

