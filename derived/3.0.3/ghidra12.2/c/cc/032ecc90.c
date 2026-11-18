
void FUN_032ecc90(int *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  long lVar9;
  ushort uVar10;
  void *__dest;
  void *__src;
  ushort local_44 [2];
  int local_28;
  int iStack_24;
  
  iVar3 = *param_1;
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  iVar5 = param_1[2];
  if (iVar3 <= param_1[2]) {
    iVar5 = iVar3;
  }
  if (iVar5 != -1) {
    iVar3 = iVar5;
  }
  param_1[3] = iVar3;
  FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
  if ((param_3 & 1) != 0) {
    iVar5 = 0;
    uVar10 = 0x20;
    local_44[0] = 0x20;
    local_44[1] = 0;
    puVar8 = local_44;
    do {
      if (uVar10 == 0xe) {
        uVar4 = puVar8[3] >> 1;
        puVar8 = puVar8 + 3 + uVar4;
        iVar5 = iVar5 + (uint)uVar4 + 3;
      }
      else if (uVar10 == 0) goto code_r0x032ecd40;
      iVar3 = iVar5 + 2;
      if (uVar10 != 0xf) {
        iVar3 = iVar5;
      }
      iVar5 = iVar3 + 1;
      puVar8 = puVar8 + (ulong)(uVar10 == 0xf) * 2 + 1;
      uVar10 = *puVar8;
    } while( true );
  }
LAB_032ecd60:
  iVar5 = param_1[0x183];
  if (iVar5 == -1) {
    iVar5 = FUN_03363a30(*(undefined8 *)(param_1 + 8),*param_1,param_2,0xffffffff);
    *param_1 = *param_1 + iVar5;
  }
  else {
    iVar5 = FUN_03363c80(*(undefined8 *)(param_1 + 8),iVar5,param_1[0x184] - iVar5,param_2,
                         0xffffffff);
    param_1[3] = param_1[0x183];
    *param_1 = param_1[0x183] + iVar5;
    FUN_032e81e0(param_1);
  }
  param_1[2] = -1;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  *(undefined2 *)(param_1 + 400) = 0;
  param_1[0x187] = -1;
  param_1[0x188] = -1;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  nn::kpr::KeyCodeComposer::Clear();
  *(undefined2 *)(param_1 + 0x197) = 0;
  param_1[0x196] = 0;
  param_1[0x189] = -1;
  **(undefined2 **)(param_1 + 0x1a8) = 0;
  **(undefined2 **)(param_1 + 0x1de) = 0;
  param_1[0x11d] = 0;
  **(undefined2 **)(param_1 + 0x11a) = 0;
  uVar6 = FUN_032e84e0(param_1);
  if ((uVar6 & 1) != 0) {
    FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
    __dest = *(void **)(param_1 + 0x1de);
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    __src = *(void **)(param_1 + 0x1a8);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
      lVar9 = 0;
      do {
        if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar9 * 2) == 0) goto LAB_032eceac;
        lVar1 = *(long *)(param_1 + 0x1a8) + lVar9 * 2;
        if (*(short *)(lVar1 + 2) == 0) {
          lVar9 = lVar9 + 1;
          goto LAB_032eceac;
        }
        if (*(short *)(lVar1 + 4) == 0) {
          lVar9 = lVar9 + 2;
          goto LAB_032eceac;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_032eceac:
      uVar2 = (uint)lVar9;
      if (param_1[0x1e0] <= (int)(uint)lVar9) {
        uVar2 = param_1[0x1e0] - 1;
      }
      uVar6 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
      memcpy(__dest,__src,uVar6);
      *(undefined2 *)((long)__dest + uVar6) = 0;
    }
    param_1[1] = *param_1;
    FUN_03363ed0(param_1 + 0x11e,*(undefined8 *)(param_1 + 0x11a));
    param_1[0x185] = param_1[0x183];
    local_28 = param_1[3];
    iStack_24 = *param_1;
    puVar7 = *(undefined8 **)(param_1 + 4);
    param_1[0x186] = param_1[0x184];
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,&local_28);
    }
  }
  return;
code_r0x032ecd40:
  iVar5 = FUN_03363a30(*(undefined8 *)(param_1 + 8),*param_1,local_44,iVar5);
  param_1[2] = -1;
  *param_1 = *param_1 + iVar5;
  goto LAB_032ecd60;
}

