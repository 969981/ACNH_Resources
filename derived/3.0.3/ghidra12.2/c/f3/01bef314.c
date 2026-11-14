
void FUN_01bef314(long param_1,long param_2)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  undefined *__src;
  int iVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  undefined *__dest;
  ulong uVar9;
  undefined1 unaff_w22;
  
  sVar2 = *(short *)(param_2 + 0xc);
  uVar3 = *(ushort *)(param_2 + 0xe);
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  **(undefined2 **)(param_1 + 0x18) = 0;
  **(undefined2 **)(param_1 + 0xb0) = 0;
  if (sVar2 == 0x28) {
    if (uVar3 == 0x49) {
      *(undefined1 *)(param_1 + 0xb) = 1;
    }
    else if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 10) = 1;
    }
    else if (uVar3 < 0x4e) {
      puVar5 = &DAT_05340458;
      goto LAB_01bef3a0;
    }
  }
  else if ((sVar2 == 0x2d) && (uVar3 < 0xc)) {
    puVar5 = &DAT_05340590;
LAB_01bef3a0:
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((long)puVar5 + (ulong)uVar3 * 4);
  }
  puVar6 = *(ushort **)(param_2 + 0x18);
  puVar8 = (ushort *)((long)puVar6 + (ulong)*(ushort *)(param_2 + 0x10));
  if ((ulong)*(ushort *)(param_2 + 0x10) == 0) {
    puVar7 = puVar6;
  }
  else {
    unaff_w22 = (undefined1)*puVar6;
    puVar7 = (ushort *)((long)puVar6 + 1);
  }
  if ((ushort *)((long)puVar7 + 1U) <= puVar8 && ((int)puVar7 - (int)puVar6 & 1U) != 0) {
    puVar7 = (ushort *)((long)puVar7 + 1);
  }
  puVar6 = puVar7 + 1;
  if (puVar6 <= puVar8) {
    uVar3 = *puVar7;
    if ((((uVar3 & 1) == 0) && ((ushort *)((long)puVar6 + (ulong)uVar3) <= puVar8)) &&
       (puVar8 = *(ushort **)(param_1 + 0x18), puVar8 != puVar6)) {
      uVar1 = (uint)(uVar3 >> 1);
      if (*(int *)(param_1 + 0x20) <= (int)(uint)(uVar3 >> 1)) {
        uVar1 = *(int *)(param_1 + 0x20) - 1;
      }
      uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
      memcpy(puVar8,puVar6,uVar9);
      *(undefined2 *)((long)puVar8 + uVar9) = 0;
    }
  }
  switch(unaff_w22) {
  case 0:
    if ((*(char *)(param_1 + 8) == '\0') && (*(int *)(DAT_053e0208 + 0xd20) != -1)) {
      FUN_038d1340(param_1 + 0x10,&DAT_041697e2);
      return;
    }
  case 1:
    __dest = *(undefined **)(param_1 + 0x18);
    if (__dest == &DAT_04169470) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x20);
    __src = &DAT_04169470;
    break;
  case 2:
    __dest = *(undefined **)(param_1 + 0x18);
    if (__dest == &DAT_04169728) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x20);
    __src = &DAT_04169728;
    break;
  case 3:
    __dest = *(undefined **)(param_1 + 0x18);
    if (__dest == &DAT_04169866) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x20);
    __src = &DAT_04169866;
    break;
  default:
    goto switchD_01bef458_default;
  }
  uVar1 = 2;
  if (iVar4 < 3) {
    uVar1 = iVar4 - 1;
  }
  uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
  memcpy(__dest,__src,uVar9);
  *(undefined2 *)(__dest + uVar9) = 0;
switchD_01bef458_default:
  return;
}

