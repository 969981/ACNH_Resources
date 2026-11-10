
void thunk_FUN_0021dc00(undefined8 param_1,long *param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  
  cVar4 = FUN_002aaa44();
  if (cVar4 != -3) {
    if ((short)param_2[0xc] == 0) {
      uStack_4c = 0;
      uStack_54 = 0x800000000000000;
      (**(code **)(*param_2 + 0x10))(param_2,&uStack_54);
      iVar1 = *(int *)((long)param_2 + 0x6c);
    }
    else {
      iVar1 = *(int *)((long)param_2 + 0x6c);
    }
    if ((iVar1 == 2) && (1 < *(ushort *)(param_2 + 0xc))) {
      lVar12 = 0;
      do {
        uVar5 = (**(code **)(*param_2 + 0x68))(param_2,param_2[10] + lVar12 * 0x30);
        if ((uVar5 & 1) != 0) {
          uVar5 = FUN_0021dde0(param_2,*(undefined8 *)(param_2[10] + lVar12 * 0x30 + 0x10));
          if ((uVar5 & 1) != 0) {
            plVar6 = (long *)FUN_002aaa64(param_2);
            uVar5 = (**(code **)(*plVar6 + 0x68))
                              (plVar6,*(undefined8 *)(param_2[10] + lVar12 * 0x30 + 0x10));
            if ((uVar5 & 1) == 0) goto LAB_0021dca0;
          }
          lVar8 = param_2[10];
          uVar2 = *(ushort *)(lVar8 + lVar12 * 0x30 + 0x24);
          uVar9 = (uint)uVar2;
          if (uVar2 != 0) {
            lVar10 = lVar8 + lVar12 * 0x30;
            uVar11 = (uint)*(ushort *)(lVar10 + 0x22);
            uVar2 = *(ushort *)(lVar10 + 0x20);
            do {
              uVar3 = 0;
              if (uVar2 != 0) {
                uVar3 = uVar11 / uVar2;
              }
              uVar5 = (ulong)(uVar11 - uVar3 * uVar2);
              if (*(char *)(*(long *)(lVar10 + 0x28) + uVar5 * 0x5ac + 0x5a9) == '\0') {
                uVar9 = *(uint *)(*(long *)(lVar10 + 0x28) + uVar5 * 0x5ac + 0x5a4);
                if (uVar9 != 0) {
                  if (*(long *)(lVar8 + lVar12 * 0x30 + 0x10) == 0) {
                    uStack_4c = 0;
                    uStack_54 = 0x800000000000000;
                    (**(code **)(*param_2 + 0x10))(param_2,&uStack_54);
                  }
                  if (param_3 < uVar9) {
                    uVar7 = 0x10c04;
                    goto LAB_0021dd58;
                  }
                  uStack_54 = (ulong)uStack_54._4_4_ << 0x20;
                  goto LAB_0021dd5c;
                }
                break;
              }
              uVar11 = uVar11 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
        }
LAB_0021dca0:
        lVar12 = lVar12 + 1;
      } while ((int)((uint)lVar12 & 0xffff) < (int)(*(ushort *)(param_2 + 0xc) - 1));
    }
  }
  uVar7 = 0x2c09;
LAB_0021dd58:
  uStack_54 = CONCAT44(uStack_54._4_4_,uVar7);
LAB_0021dd5c:
  uStack_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&uStack_54 + 4),(Result *)&uStack_44);
  FUN_002296c4(param_1,&uStack_54);
  return;
}

