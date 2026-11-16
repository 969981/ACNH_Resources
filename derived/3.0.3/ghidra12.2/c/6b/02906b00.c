
void FUN_02906b00(long param_1,long *param_2,int *param_3)

{
  ulong uVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ushort *puVar9;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (param_2 != (long *)0x0) {
    *(long **)(param_1 + 0x10) = param_2;
    uVar5 = (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    uVar6 = (**(code **)(*param_2 + 0x20))(param_2);
    *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + (uVar6 & 0xffffffff) * 2 + -2;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x38))();
  }
  iVar2 = *param_3;
  if (iVar2 != 0) {
    lVar7 = *(long *)(param_3 + 2);
    bVar4 = false;
    uVar6 = 0;
    do {
      uVar3 = *(ushort *)(lVar7 + (-(uVar6 >> 0x1f) & 0xfffffffe00000000 | uVar6 << 1));
      uVar8 = (uint)uVar3;
      bVar4 = (bool)(bVar4 | uVar8 == 0);
      if (!bVar4) {
        if (((((uVar8 & 0xfffe) == 0xe) || ((uVar8 & 0xfffe) == 0xfe0e)) ||
            ((uVar3 & 0xf800) == 0xd800)) ||
           (((uVar3 == 0x7f || (uVar8 - 1 < 0x1f && uVar8 - 0xb < 0xfffffffe)) ||
            ((uVar3 == 0xfeff || (uVar3 == 0xfffe)))))) {
                    /* WARNING: Could not recover jumptable at 0x02906c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_2 + 0x38))(param_2);
          return;
        }
        puVar9 = *(ushort **)(param_1 + 0x18);
        if (puVar9 != (ushort *)0x0) {
          if (*(ushort **)(param_1 + 0x20) < puVar9 + 1) {
            *(undefined1 *)(param_1 + 0x28) = 0;
            if (*(long *)(param_1 + 8) != 0) {
              *(undefined4 *)(*(long *)(param_1 + 8) + 0x200) = 2;
            }
          }
          else {
            *puVar9 = uVar3;
            *(ushort **)(param_1 + 0x18) = puVar9 + 1;
            *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
          }
        }
      }
      uVar1 = uVar6 + 1;
      uVar6 = uVar1 & 0xffffffff;
    } while (iVar2 != (int)uVar1);
  }
  return;
}

