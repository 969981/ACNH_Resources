
void FUN_02cdf8d0(undefined8 param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  
  FUN_02cded9c();
  if ((param_3 != 0) && (iVar1 = *param_2, iVar1 != 0)) {
    local_78 = *(undefined2 *)PTR_DAT_04bb37e0;
    local_76 = PTR_DAT_04bb37e0[2];
    local_75 = PTR_DAT_04bb37e0[3];
    local_74 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_70 = local_78;
    local_6e = local_76;
    local_6d = local_75;
    local_6c = local_74;
    local_68 = local_78;
    local_66 = local_76;
    local_65 = local_75;
    local_64 = local_74;
    local_60 = local_78;
    local_5e = local_76;
    local_5d = local_75;
    local_5c = local_74;
    local_58 = local_78;
    local_56 = local_76;
    local_55 = local_75;
    local_54 = local_74;
    local_50 = local_78;
    local_4e = local_76;
    local_4d = local_75;
    local_4c = local_74;
    local_48 = local_78;
    local_46 = local_76;
    local_45 = local_75;
    local_44 = local_74;
    local_40 = local_78;
    local_3e = local_76;
    local_3d = local_75;
    local_3c = local_74;
    local_38 = local_78;
    local_36 = local_76;
    local_35 = local_75;
    local_34 = local_74;
    if (param_3 == 2) {
      if (DAT_05abbc58 == 0) {
        return;
      }
      iVar2 = *(int *)(DAT_05abbc58 + 0xe0);
      if ((param_4 & 1) == 0) {
        if (iVar2 == 0) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar4 = 0;
          lVar5 = (long)iVar2 << 3;
          uVar3 = 0xffffffff;
          do {
            if (iVar1 == *(int *)(*(long *)(*(long *)(DAT_05abbc58 + 0xe8) + uVar4 * 8) + 8)) {
              uVar3 = uVar4 & 0xffffffff;
              break;
            }
            uVar4 = uVar4 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
        uVar3 = FUN_037363fc(DAT_05abbc58,&local_78,uVar3);
      }
      else {
        if (iVar2 == 0) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar4 = 0;
          lVar5 = (long)iVar2 << 3;
          uVar3 = 0xffffffff;
          do {
            if (iVar1 == *(int *)(*(long *)(*(long *)(DAT_05abbc58 + 0xe8) + uVar4 * 8) + 8)) {
              uVar3 = uVar4 & 0xffffffff;
              break;
            }
            uVar4 = uVar4 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
        uVar3 = FUN_03736174(DAT_05abbc58,&local_78,uVar3);
      }
    }
    else {
      if (param_3 != 1) {
        return;
      }
      if ((param_4 & 1) == 0) {
        uVar3 = FUN_021f9cc0(&local_78,param_2,1);
      }
      else {
        if (*(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0) == 0) {
          return;
        }
        uVar3 = FUN_0211a3dc(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0),&local_78,param_2);
      }
    }
    if ((uVar3 & 1) != 0) {
      FUN_02cdfaec(param_1,&local_78);
      FUN_02cdef08(param_1);
      FUN_02cdf164(param_1);
    }
  }
  return;
}

