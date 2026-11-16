
int FUN_02818800(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  uint local_24;
  
  iVar4 = 0;
  uVar5 = 0;
  do {
    do {
    } while (7 < uVar5);
    plVar6 = (long *)(param_1 + uVar5 * 0x48);
    if (*plVar6 != 0 || plVar6[1] != 0) {
      local_24 = 0;
      nn::account::ListAllUsers((int *)&local_24,(Uid *)&local_c0,8);
      if (0 < (int)local_24) {
        lVar1 = *plVar6;
        lVar2 = plVar6[1];
        if ((lVar1 == local_c0 && lVar2 == lStack_b8) ||
           ((((((bVar3 = local_24 < 2, local_24 == 1 ||
                ((((lVar1 == local_b0 && (lVar2 == local_a8)) ||
                  (bVar3 = local_24 < 3, local_24 == 2)) ||
                 ((lVar1 == local_a0 && (lVar2 == local_98)))))) ||
               ((bVar3 = local_24 < 4, local_24 == 3 ||
                ((((lVar1 == local_90 && (lVar2 == local_88)) ||
                  ((bVar3 = local_24 < 5, local_24 == 4 ||
                   (((lVar1 == local_80 && (lVar2 == local_78)) ||
                    (bVar3 = local_24 < 6, local_24 == 5)))))) ||
                 ((lVar1 == local_70 && (lVar2 == local_68)))))))) ||
              (bVar3 = local_24 < 7, local_24 == 6)) ||
             (((lVar1 == local_60 && (lVar2 == local_58)) ||
              ((bVar3 = local_24 < 8, local_24 == 7 || ((lVar1 == local_50 && (lVar2 == local_48))))
              )))) && (!bVar3)))) goto LAB_02818830;
      }
      iVar4 = iVar4 + 1;
    }
LAB_02818830:
    uVar5 = uVar5 + 1;
    if (uVar5 == 8) {
      return iVar4;
    }
  } while( true );
}

