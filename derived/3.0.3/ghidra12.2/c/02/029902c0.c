
/* WARNING: Type propagation algorithm not settling */

void FUN_029902c0(int *param_1,long param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  ushort uVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  byte local_58 [12];
  uint local_4c [3];
  
  if ((param_4 & 1) == 0) goto LAB_029904c0;
  if (*param_1 - 0x153U < 0xc) {
    if (DAT_04c487d4 == -1) goto LAB_029904c0;
    local_4c[0] = 0x20;
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((((*(uint *)(puVar1 + 4) & 1) == 0) || (iVar2 = *(int *)(param_2 + 0x14), iVar2 == -1)) ||
       (iVar2 == 0xd)) goto LAB_029904c0;
    FUN_02507c6c(local_4c,7,1,0,0);
    uVar11 = local_4c[0] & 0xff;
    if ((local_4c[0] & 0xff) < 8) {
      local_58[0] = (byte)local_4c[0];
      while ((int)(char)iVar2 != uVar11) {
        uVar5 = (ulong)local_58[0];
        do {
          uVar13 = uVar5;
          if (uVar13 == 7) goto LAB_0299039c;
          uVar8 = FUN_02507924(local_58,&DAT_0548e169 + uVar13);
          uVar5 = uVar13 + 1;
        } while ((uVar8 & 1) == 0);
        local_58[0] = (&DAT_0548e169)[uVar13];
        if (7 < local_58[0]) goto LAB_0299039c;
        uVar11 = (uint)local_58[0];
      }
      goto LAB_029904c0;
    }
LAB_0299039c:
    uVar9 = *(ushort *)(param_2 + 0x88);
    if (*(char *)(param_2 + 8) == '\0') {
      *(ushort *)(param_2 + 0x88) = uVar9 | 2;
      *(undefined4 *)(param_2 + 0x94) = 0xd;
      goto LAB_029904c0;
    }
  }
  else {
    if ((*(int *)(param_2 + 0x14) == -1) || (DAT_05574040 == 0)) goto LAB_029904c0;
    puVar10 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar10 + 0x38))();
      if (lVar7 == 0) goto LAB_029904c0;
      lVar7 = lVar7 + 0x70;
    }
    else if (((puVar10 == (undefined8 *)0x0) || ((long *)puVar10[0x26] == (long *)0x0)) ||
            (lVar7 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar7 == 0)) goto LAB_029904c0;
    if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar10 == (undefined8 *)0x0)) {
      uVar11 = 1;
    }
    else {
      uVar11 = (**(code **)*puVar10)();
      uVar11 = uVar11 ^ 1;
    }
    if (*(uint *)(param_2 + 0x14) < 8) {
      lVar12 = *(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) +
               (ulong)*(uint *)(param_2 + 0x14) * 0x48;
      bVar6 = *(long *)(lVar12 + 0x1e33b0) != 0 || *(long *)(lVar12 + 0x1e33b8) != 0;
    }
    else {
      bVar6 = false;
    }
    if ((((uVar11 & 1) == 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
    if (bVar6) goto LAB_029904c0;
    uVar9 = *(ushort *)(param_2 + 0x88);
  }
  *(undefined1 *)(param_2 + 0x8a) = 0;
  *(undefined4 *)(param_2 + 0x8c) = 0;
  *(undefined4 *)(param_2 + 0x94) = 0xffffffff;
  *(ushort *)(param_2 + 0x88) = uVar9 | 7;
LAB_029904c0:
  uVar9 = *(ushort *)(param_2 + 0x88);
  if ((uVar9 >> 1 & 1) != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x94);
    *(undefined4 *)(param_3 + 0x134) = uVar3;
    *(byte *)(param_3 + 0x130) = *(byte *)(param_3 + 0x130) | 1;
    *(undefined4 *)(param_2 + 0x14) = uVar3;
    uVar9 = *(ushort *)(param_2 + 0x88);
  }
  if ((uVar9 & 1) != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x8c);
    *(undefined2 *)(param_3 + 0x131) = 0x101;
    *(undefined8 *)(param_3 + 0x140) = 0xffffffffffffffff;
    *(undefined4 *)(param_3 + 0x138) = uVar3;
    *(undefined4 *)(param_2 + 0xc) = uVar3;
    uVar9 = *(ushort *)(param_2 + 0x88);
  }
  uVar11 = (uint)uVar9;
  if ((((uVar9 >> 9 & 1) != 0) && (*(int *)(param_2 + 0x14) == *(int *)(param_2 + 0x98))) &&
     (*(int *)(param_2 + 0xc) == *(int *)(param_2 + 0x90))) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_3 + 0x138) = 0;
    *(undefined2 *)(param_3 + 0x131) = 0x101;
    *(undefined8 *)(param_3 + 0x140) = 0xffffffffffffffff;
    uVar11 = (uint)*(ushort *)(param_2 + 0x88);
  }
  if ((uVar11 >> 2 & 1) == 0) {
    uVar9 = *(ushort *)(param_2 + 0xc0);
  }
  else {
    uVar4 = *(undefined1 *)(param_2 + 0x8a);
    *(undefined1 *)(param_3 + 0x133) = uVar4;
    *(byte *)(param_3 + 0x130) = *(byte *)(param_3 + 0x130) | 2;
    *(undefined1 *)(param_2 + 8) = uVar4;
    uVar9 = *(ushort *)(param_2 + 0xc0);
  }
  if ((uVar9 >> 1 & 1) != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0xcc);
    *(undefined4 *)(param_3 + 0x164) = uVar3;
    *(byte *)(param_3 + 0x160) = *(byte *)(param_3 + 0x160) | 1;
    *(undefined4 *)(param_2 + 0x14) = uVar3;
    uVar9 = *(ushort *)(param_2 + 0xc0);
  }
  if ((uVar9 & 1) != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0xc4);
    *(undefined2 *)(param_3 + 0x161) = 0x101;
    *(undefined8 *)(param_3 + 0x170) = 0xffffffffffffffff;
    *(undefined4 *)(param_3 + 0x168) = uVar3;
    *(undefined4 *)(param_2 + 0xc) = uVar3;
    uVar9 = *(ushort *)(param_2 + 0xc0);
  }
  if ((uVar9 >> 2 & 1) != 0) {
    uVar4 = *(undefined1 *)(param_2 + 0xc2);
    *(undefined1 *)(param_3 + 0x163) = uVar4;
    *(byte *)(param_3 + 0x160) = *(byte *)(param_3 + 0x160) | 2;
    *(undefined1 *)(param_2 + 8) = uVar4;
  }
  *(undefined2 *)(param_2 + 0x88) = 0;
  *(undefined1 *)(param_2 + 0x8a) = 0;
  *(undefined8 *)(param_2 + 0x8b) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x93) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x9b) = 0xffffffffffffffff;
  *(undefined1 *)(param_2 + 0xa3) = 0xff;
  *(undefined8 *)(param_2 + 0xa4) = 0;
  *(undefined8 *)(param_2 + 0xac) = 0;
  *(undefined8 *)(param_2 + 0xb4) = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 0xbc) = 0xffffffff;
  *(undefined2 *)(param_2 + 0xc0) = 0;
  *(undefined1 *)(param_2 + 0xc2) = 0;
  *(undefined8 *)(param_2 + 0xc3) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0xcb) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0xd3) = 0xffffffffffffffff;
  *(undefined1 *)(param_2 + 0xdb) = 0xff;
  *(undefined8 *)(param_2 + 0xdc) = 0;
  *(undefined8 *)(param_2 + 0xe4) = 0;
  *(undefined8 *)(param_2 + 0xec) = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 0xf4) = 0xffffffff;
  return;
}

