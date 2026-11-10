
void FUN_0021d450(undefined8 param_1,long *param_2,undefined4 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_64;
  
  puVar1 = PTR_DAT_04bc1510;
  if (*(ushort *)(param_2 + 0xc) < 2) {
LAB_0021d5b0:
    FUN_0021ded0(param_1,param_2,param_3);
    return;
  }
  lVar6 = 0;
LAB_0021d4c4:
  uVar2 = (**(code **)(*param_2 + 0x68))(param_2,param_2[10] + lVar6 * 0x30);
  if (((uVar2 & 1) != 0) &&
     (uVar2 = FUN_0021dde0(param_2,*(undefined8 *)(param_2[10] + lVar6 * 0x30 + 0x10)),
     (uVar2 & 1) != 0)) {
    if (*(long *)puVar1 == 0) goto LAB_0021d5c4;
    lVar7 = *(long *)(param_2[10] + lVar6 * 0x30 + 0x10);
    lVar3 = FUN_002aaa28(param_2);
    piVar4 = (int *)((long)param_2 + 0x6c);
    if (lVar3 != lVar7) {
      if (1 < *(ushort *)(param_2 + 0xc)) {
        iVar8 = 0;
        lVar3 = 0;
        do {
          uVar2 = (**(code **)(*param_2 + 0x68))(param_2,param_2[10] + lVar3);
          if ((uVar2 & 1) != 0) {
            lVar5 = param_2[10];
            if (lVar5 == 0) {
              local_74 = 0x800000000000000;
              local_6c = 0;
              (**(code **)(*param_2 + 0x10))(param_2,&local_74);
              lVar5 = param_2[10];
            }
            if (*(long *)(lVar5 + lVar3 + 0x10) == lVar7) goto LAB_0021d4a0;
          }
          iVar8 = iVar8 + 1;
          lVar3 = lVar3 + 0x30;
          if ((int)(*(ushort *)(param_2 + 0xc) - 1) <= iVar8) break;
        } while( true );
      }
      goto LAB_0021d5c4;
    }
    goto LAB_0021d4a4;
  }
  goto LAB_0021d4b0;
LAB_0021d4a0:
  piVar4 = (int *)(lVar5 + lVar3 + 0x1c);
LAB_0021d4a4:
  if (*piVar4 != 2) {
LAB_0021d5c4:
    local_64 = 0;
    local_74 = CONCAT44(local_74._4_4_,0x4c11);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_74 + 4),(Result *)&local_64);
    FUN_002296c4(param_1,&local_74);
    return;
  }
LAB_0021d4b0:
  lVar6 = lVar6 + 1;
  if ((int)(*(ushort *)(param_2 + 0xc) - 1) <= (int)((uint)lVar6 & 0xffff)) goto LAB_0021d5b0;
  goto LAB_0021d4c4;
}

