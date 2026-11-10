
void thunk_FUN_0021da20(undefined8 param_1,long *param_2,undefined8 *param_3,void *param_4,
                       int *param_5,undefined4 param_6)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iStack_80;
  ErrorResultVariant aEStack_7c [12];
  int iStack_70;
  ErrorResultVariant aEStack_6c [12];
  undefined4 uStack_54;
  
  piVar6 = &iStack_80;
  if ((param_3 == (undefined8 *)0x0) || (param_5 == (int *)0x0)) {
    iStack_80 = 0;
    iStack_70 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&iStack_80);
  }
  else {
    *param_5 = 0;
    *param_3 = 0;
    FUN_0021dc00(&iStack_70,param_2,param_6);
    if (iStack_70 == 0) {
      if (1 < *(ushort *)(param_2 + 0xc)) {
        lVar11 = 0;
        do {
          uVar4 = (**(code **)(*param_2 + 0x68))(param_2,param_2[10] + lVar11 * 0x30);
          if ((uVar4 & 1) != 0) {
            uVar4 = FUN_0021dde0(param_2,*(undefined8 *)(param_2[10] + lVar11 * 0x30 + 0x10));
            if ((uVar4 & 1) != 0) {
              plVar5 = (long *)FUN_002aaa64(param_2);
              uVar4 = (**(code **)(*plVar5 + 0x68))
                                (plVar5,*(undefined8 *)(param_2[10] + lVar11 * 0x30 + 0x10));
              if ((uVar4 & 1) == 0) goto LAB_0021dae8;
            }
            uVar2 = *(ushort *)(param_2[10] + lVar11 * 0x30 + 0x24);
            uVar7 = (uint)uVar2;
            if (uVar2 != 0) {
              lVar8 = param_2[10] + lVar11 * 0x30;
              uVar9 = (uint)*(ushort *)(lVar8 + 0x22);
              uVar2 = *(ushort *)(lVar8 + 0x20);
              do {
                uVar3 = 0;
                if (uVar2 != 0) {
                  uVar3 = uVar9 / uVar2;
                }
                uVar3 = uVar9 - uVar3 * uVar2;
                lVar10 = *(long *)(lVar8 + 0x28) + (ulong)uVar3 * 0x5ac;
                if (*(char *)(lVar10 + 0x5a9) == '\0') {
                  lVar8 = *(long *)(lVar8 + 0x28) + (ulong)uVar3 * 0x5ac;
                  *(undefined1 *)(lVar10 + 0x5a9) = 1;
                  memcpy(param_4,(void *)(lVar8 + 2),(ulong)*(uint *)(lVar8 + 0x5a4));
                  iVar1 = *(int *)(lVar8 + 0x5a4);
                  *param_5 = iVar1;
                  goto joined_r0x0021dbbc;
                }
                uVar9 = uVar9 + 1;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            iVar1 = *param_5;
joined_r0x0021dbbc:
            if (iVar1 != 0) {
              iStack_80 = 0;
              *param_3 = *(undefined8 *)(param_2[10] + lVar11 * 0x30 + 0x10);
              goto LAB_0021dbe4;
            }
          }
LAB_0021dae8:
          lVar11 = lVar11 + 1;
        } while ((int)((uint)lVar11 & 0xffff) < (int)(*(ushort *)(param_2 + 0xc) - 1));
      }
      iStack_80 = 0x2c09;
LAB_0021dbe4:
      uStack_54 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_7c,(Result *)&uStack_54);
      goto LAB_0021dab8;
    }
  }
  piVar6 = &iStack_70;
LAB_0021dab8:
  FUN_002296c4(param_1,piVar6);
  return;
}

