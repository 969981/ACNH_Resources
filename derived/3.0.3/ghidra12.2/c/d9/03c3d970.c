
void FUN_03c3d970(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *local_50;
  undefined8 local_48;
  
  *(undefined4 *)(param_1 + 1) = 6;
  lVar2 = DAT_05aecb30;
  if (DAT_05aecb30 != 0) {
    iVar3 = *(int *)(DAT_05aecb30 + 0x35c);
    if (0 < iVar3) {
      iVar5 = *(int *)(DAT_05aecb30 + 0x344);
      uVar7 = (ulong)iVar5;
      puVar1 = PTR_DAT_04bd19d8 + 0x10;
      do {
        lVar8 = *(long *)(lVar2 + 0x330);
        lVar6 = *(long *)(*(long *)(lVar8 + 0x198) + uVar7 * 8);
        if ((lVar6 != 0) && (*(char *)(lVar6 + 9) != '\0')) {
          lVar9 = uVar7 * 8;
          local_48 = *(undefined8 *)(*(long *)(lVar8 + 0x1b28) + lVar9);
          lVar4 = *(long *)(*(long *)(lVar8 + 0x198) + lVar9);
          lVar6 = 0;
          if (*(char *)(lVar4 + 9) != '\0') {
            lVar6 = lVar4;
          }
          local_50 = puVar1;
          FUN_003331e0(lVar6,*(undefined8 *)(lVar8 + 0x2c38),0);
          FUN_0033cb08(lVar8,&local_50,uVar7 & 0xffffffff,0);
          *(undefined8 *)(*(long *)(lVar8 + 0x1b28) + lVar9) = 0;
          iVar5 = *(int *)(lVar2 + 0x344);
          iVar3 = *(int *)(lVar2 + 0x35c);
        }
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(iVar5 + iVar3));
    }
    *(undefined4 *)(lVar2 + 0x35c) = 0;
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  if ((long *)param_1[0x1b] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03c3da88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x1b] + 0x20))();
  return;
}

