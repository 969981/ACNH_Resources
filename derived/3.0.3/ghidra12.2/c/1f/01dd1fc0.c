
undefined8 FUN_01dd1fc0(long param_1,ulong *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  
  uVar5 = *param_2;
  if (uVar5 == 0) {
    lVar9 = *(long *)(param_1 + 0xf0);
  }
  else {
    if (uVar5 != *(ulong *)(param_1 + 200)) {
      iVar7 = *(int *)(*(long *)(param_1 + 0xe0) + 0x20);
      if (iVar7 == 0) {
        return 0;
      }
      plVar8 = *(long **)(*(long *)(param_1 + 0xe0) + 0x28);
      lVar6 = (long)iVar7 * 8;
      while( true ) {
        lVar6 = lVar6 + -8;
        lVar9 = *plVar8;
        if (uVar5 == *(ulong *)(lVar9 + 0x20)) break;
        plVar8 = plVar8 + 1;
        if (*(ulong *)(lVar9 + 0x20) < uVar5 || lVar6 == 0) {
          return 0;
        }
      }
      goto LAB_01dd2014;
    }
    lVar9 = *(long *)(param_1 + 0xd8);
  }
  if (lVar9 == 0) {
    return 0;
  }
LAB_01dd2014:
  iVar7 = *(int *)(param_1 + 0x4c);
  if (iVar7 < 1) {
    return 0;
  }
  bVar4 = false;
  iVar10 = 0;
  puVar1 = PTR_DAT_04bb2a58 + 0x10;
  do {
    uVar2 = iVar10 + (int)param_2[1] * iVar7;
    if (*(char *)((long)param_2 + 0xc) == '\0') {
      if (((int)uVar2 < 0) || (*(int *)(lVar9 + 0x68) <= (int)uVar2)) goto LAB_01dd2188;
      plVar8 = *(long **)(*(long *)(lVar9 + 0x70) + (ulong)uVar2 * 8);
    }
    else {
      if (((int)uVar2 < 0) || (*(int *)(lVar9 + 0x58) <= (int)uVar2)) {
LAB_01dd2188:
        if (bVar4) {
          lVar6 = *(long *)(param_1 + 0x58);
          *(undefined ***)(lVar6 + 0x70) = &PTR_LAB_04a5b6b8;
          *(long *)(lVar6 + 0x78) = param_1;
          *(long *)(lVar6 + 0x80) = lVar9;
          return 1;
        }
        return 0;
      }
      plVar8 = *(long **)(*(long *)(lVar9 + 0x60) + (ulong)uVar2 * 8);
    }
    if ((plVar8 == (long *)0x0) || (*plVar8 == 0)) goto LAB_01dd2188;
    if (((char)plVar8[0xd9] == '\0') && ((*(byte *)(plVar8 + 0x30e) & 1) == 0)) {
      lVar6 = *(long *)(param_1 + 0x58);
      if (*(int *)(lVar6 + 0xe8) < *(int *)(lVar6 + 0xec)) {
        puVar3 = *(undefined8 **)(lVar6 + 0xf8);
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar6 + 0xf8) = *puVar3;
        }
        *(undefined4 *)(puVar3 + 1) = 0;
        *(undefined4 *)(puVar3 + 6) = 0x31;
        *(undefined1 *)((long)puVar3 + 0x34) = 0;
        *(undefined1 *)((long)puVar3 + 100) = 0;
        *(undefined2 *)(puVar3 + 0xd) = 0;
        *(undefined1 *)((long)puVar3 + 0x6a) = 0;
        *(undefined4 *)puVar3 = 0;
        *(undefined4 *)(puVar3 + 0xe) = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = puVar1;
        puVar3[5] = (undefined4 *)((long)puVar3 + 0x34);
        if (*(int *)(lVar6 + 0xe8) < *(int *)(lVar6 + 0xec)) {
          *(undefined8 **)(*(long *)(lVar6 + 0xf0) + (long)*(int *)(lVar6 + 0xe8) * 8) = puVar3;
          *(int *)(lVar6 + 0xe8) = *(int *)(lVar6 + 0xe8) + 1;
        }
        *(undefined4 *)puVar3 = 3;
        memcpy(puVar3 + 0xf,plVar8 + 1,0x6b8);
        iVar7 = *(int *)(param_1 + 0x4c);
      }
      bVar4 = true;
    }
    iVar10 = iVar10 + 1;
    if (iVar7 <= iVar10) goto LAB_01dd2188;
  } while( true );
}

