
void FUN_035efdb0(long *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong local_450 [128];
  
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    local_450[0]._0_1_ = 8;
    (**(code **)(*param_1 + 0x20))(param_1,local_450,1);
  }
  if ((int)param_1[1] != 2) {
    if ((int)param_1[1] != 1) {
      lVar4 = param_3 - param_2;
      (**(code **)(*param_1 + 0x20))(param_1,param_2,lVar4);
      if ((int)param_1[2] == 0xff) {
        return;
      }
      if (param_3 == param_2) {
        return;
      }
      if (lVar4 >> 3 == 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        do {
          puVar5 = (ulong *)(param_2 + uVar2 * 8);
          uVar2 = uVar2 + 2;
          uVar3 = (*puVar5 & 0xff00ff00ff00ff00) >> 8 | (*puVar5 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          uVar1 = (puVar5[1] & 0xff00ff00ff00ff00) >> 8 | (puVar5[1] & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          *puVar5 = uVar3 >> 0x20 | uVar3 << 0x20;
          puVar5[1] = uVar1 >> 0x20 | uVar1 << 0x20;
        } while ((lVar4 >> 3 & 0xfffffffffffffffeU) != uVar2);
      }
      if (((uint)lVar4 >> 3 & 1) == 0) {
        return;
      }
      uVar3 = *(ulong *)(param_2 + uVar2 * 8);
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      *(ulong *)(param_2 + uVar2 * 8) = uVar3 >> 0x20 | uVar3 << 0x20;
      return;
    }
    if ((int)param_1[2] != 0xff) {
      if (param_3 <= param_2) {
        return;
      }
      do {
        uVar2 = (long)(param_3 - param_2) >> 3;
        if (0x7f < uVar2) {
          uVar2 = 0x80;
        }
        if (uVar2 != 0) {
          if (uVar2 < 4) {
            lVar4 = 0;
          }
          else {
            lVar4 = 0;
            puVar5 = (ulong *)(param_2 + 0x10);
            puVar6 = local_450 + 2;
            do {
              lVar4 = lVar4 + -4;
              uVar3 = (puVar5[-2] & 0xff00ff00ff00ff00) >> 8 | (puVar5[-2] & 0xff00ff00ff00ff) << 8;
              uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
              uVar1 = (puVar5[-1] & 0xff00ff00ff00ff00) >> 8 | (puVar5[-1] & 0xff00ff00ff00ff) << 8;
              uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
              puVar6[-2] = uVar3 >> 0x20 | uVar3 << 0x20;
              puVar6[-1] = uVar1 >> 0x20 | uVar1 << 0x20;
              uVar3 = (*puVar5 & 0xff00ff00ff00ff00) >> 8 | (*puVar5 & 0xff00ff00ff00ff) << 8;
              uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
              uVar1 = (puVar5[1] & 0xff00ff00ff00ff00) >> 8 | (puVar5[1] & 0xff00ff00ff00ff) << 8;
              uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
              *puVar6 = uVar3 >> 0x20 | uVar3 << 0x20;
              puVar6[1] = uVar1 >> 0x20 | uVar1 << 0x20;
              puVar5 = puVar5 + 4;
              puVar6 = puVar6 + 4;
            } while (-lVar4 != (uVar2 & 0xfffffffffffffffc));
            lVar4 = -lVar4;
          }
          if ((uVar2 & 3) != 0) {
            uVar3 = uVar2 & 3;
            puVar5 = local_450 + lVar4;
            puVar6 = (ulong *)(param_2 + lVar4 * 8);
            do {
              uVar3 = uVar3 - 1;
              uVar1 = (*puVar6 & 0xff00ff00ff00ff00) >> 8 | (*puVar6 & 0xff00ff00ff00ff) << 8;
              uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
              *puVar5 = uVar1 >> 0x20 | uVar1 << 0x20;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            } while (uVar3 != 0);
          }
        }
        (**(code **)(*param_1 + 0x20))(param_1,local_450,uVar2 * 8);
        param_2 = param_2 + uVar2 * 8;
      } while (param_2 < param_3);
      return;
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3 - param_2);
  return;
}

