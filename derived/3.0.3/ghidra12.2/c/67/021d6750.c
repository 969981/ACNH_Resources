
void FUN_021d6750(uint *param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar2 = PTR_DAT_04bb4130;
  lVar6 = *(long *)PTR_DAT_04bb4130;
  if (lVar6 != 0) {
    (**(code **)(*param_2 + 0x18))();
    local_38 = FUN_006bd550(param_2[1],0);
    lVar6 = FUN_0079e4d0(lVar6,&local_38);
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)puVar2;
      (**(code **)(*param_2 + 0x18))(param_2);
      local_34 = FUN_006bd550(param_2[1],0);
      puVar3 = (uint *)FUN_0079e4d0(uVar7,&local_34);
      if (puVar3 != (uint *)0x0) {
        uVar1 = *puVar3;
        uVar4 = 0;
        if ((uVar1 != 0) && (puVar3 != (uint *)(ulong)uVar1)) {
          puVar5 = (uint *)((long)puVar3 - (long)(ulong)uVar1);
          uVar4 = 0;
          if (*puVar5 != 0) {
            uVar1 = puVar5[1];
            if ((uVar1 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
              lVar6 = 0xc;
              if (*(char *)((long)puVar5 + 10) != '\0') {
                lVar6 = 0x1c;
              }
              lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
              if (lVar6 != 0) {
                uVar4 = 0;
                if ((ulong)uVar1 != 0) {
                  uVar4 = (uint)((ulong)((long)puVar3 - lVar6) / (ulong)uVar1);
                }
                if (*puVar5 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < DAT_053f98e8) &&
                   (uVar4 = (uint)*(ushort *)(DAT_053f98f0 + (long)(int)uVar4 * 2), uVar4 < 3))
                goto LAB_021d6868;
              }
            }
            uVar4 = 0;
          }
        }
LAB_021d6868:
        *param_1 = uVar4;
        *(undefined1 *)(param_1 + 1) = 1;
        return;
      }
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

