
int FUN_01be97b0(long *param_1,long *param_2)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 uStack_169;
  undefined *local_168;
  undefined1 *local_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  puVar2 = PTR_DAT_04bb21f8;
  local_160 = local_154;
  lVar7 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x408) + 8);
  local_55 = 0;
  local_158 = 0x100;
  local_154[0] = 0;
  local_168 = PTR_DAT_04bb21f8 + 0x10;
  (**(code **)(*param_1 + 0x18))();
  FUN_038d1270(&local_168,"%s.msbt",param_1[1]);
  if (*(long *)(lVar7 + 0x10) != lVar7 + 8) {
    lVar9 = (long)*(int *)(lVar7 + 0x1c);
    lVar8 = *(long *)(lVar7 + 0x10) - lVar9;
    do {
      if ((lVar8 != 0) && (lVar4 = FUN_03d54360(lVar8,&local_168), lVar4 != 0)) break;
      lVar8 = *(long *)(lVar8 + lVar9 + 8) - lVar9;
    } while (lVar8 != (lVar7 + 8) - lVar9);
  }
  uVar5 = FUN_03d52ee0(&uStack_169,param_1,param_2);
  if ((uVar5 & 1) != 0) {
    local_168 = puVar2 + 0x10;
    local_55 = 0;
    local_158 = 0x100;
    local_160 = local_154;
    local_154[0] = 0;
    uVar5 = FUN_03d53010(&uStack_169,&local_168,param_1,0);
    if ((uVar5 & 1) != 0) {
      iVar6 = 0;
      do {
        (**(code **)(*param_2 + 0x18))(param_2);
        (**(code **)(*param_2 + 0x18))(param_2);
        puVar10 = (undefined1 *)param_2[1];
        (**(code **)(local_168 + 0x18))(&local_168);
        if (puVar10 == local_160) {
          return iVar6;
        }
        uVar5 = 0;
        bVar3 = true;
        do {
          lVar7 = param_2[1] + 2 + uVar5;
          cVar1 = *(char *)(lVar7 + -2);
          if (cVar1 != local_160[uVar5]) break;
          if (cVar1 == '\0') {
            if (bVar3) {
              return iVar6;
            }
            break;
          }
          cVar1 = *(char *)(lVar7 + -1);
          if (cVar1 != local_160[uVar5 + 1]) break;
          if (cVar1 == '\0') {
            return iVar6;
          }
          cVar1 = *(char *)(param_2[1] + 2 + uVar5);
          if (cVar1 != local_160[uVar5 + 2]) break;
          if (cVar1 == '\0') {
            return iVar6;
          }
          bVar3 = uVar5 < 0x7fffe;
          uVar5 = uVar5 + 3;
        } while (uVar5 != 0x80001);
        iVar6 = iVar6 + 1;
        uVar5 = FUN_03d53010(&uStack_169,&local_168,param_1,iVar6);
        if ((uVar5 & 1) == 0) {
          return -1;
        }
      } while( true );
    }
  }
  return -1;
}

