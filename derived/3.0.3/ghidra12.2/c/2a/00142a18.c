
undefined4 FUN_00142a18(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong local_50;
  char local_48 [4];
  int local_44;
  
  if (param_1 == 0) {
    uVar4 = 0x2b;
  }
  else {
    if (*(undefined1 **)(param_1 + 0x678) != (undefined1 *)0x0) {
      **(undefined1 **)(param_1 + 0x678) = 0;
    }
    if (*(long *)(param_1 + 0xd8) == 0) {
      lVar6 = *(long *)(param_1 + 0xe0);
      if (lVar6 == 0) {
        lVar6 = FUN_00147234(1,3);
        if (lVar6 == 0) {
          return 0x1b;
        }
        *(long *)(param_1 + 0xe0) = lVar6;
      }
      if (*(char *)(lVar6 + 0x1e0) == '\0') {
        FUN_00149a00(lVar6,6,*(undefined8 *)(param_1 + 0xef8));
        iVar2 = FUN_00147350(lVar6,param_1);
        if (iVar2 == 0) {
          *(long *)(param_1 + 0xd8) = lVar6;
          uVar4 = 0;
          do {
            local_44 = 0;
            local_48[0] = '\0';
            iVar2 = FUN_001481b8(lVar6,0,0,1000,0,local_48);
            if (iVar2 != 0) {
              uVar4 = 0x1b;
              if (iVar2 != 3) {
                uVar4 = 0x2b;
              }
              goto LAB_00142bbc;
            }
            if (local_48[0] == '\0') {
              local_50 = 0;
              FUN_00149f24(lVar6,&local_50);
              if (local_50 != 0) {
                if (1000 < (long)local_50) {
                  local_50 = 1000;
                }
                FUN_0015905c(local_50);
              }
            }
            iVar2 = FUN_001485d4(lVar6,&local_44);
            if (iVar2 == 0 && local_44 == 0) {
              local_50 = local_50 & 0xffffffff00000000;
              lVar3 = FUN_001498dc(lVar6,&local_50);
              bVar1 = lVar3 != 0;
              if (lVar3 != 0) {
                uVar4 = *(undefined4 *)(lVar3 + 0x10);
              }
            }
            else {
              bVar1 = false;
            }
          } while ((iVar2 == 0) && (!bVar1));
          uVar5 = 0x1b;
          if (iVar2 != 3) {
            uVar5 = 0x2b;
          }
          if (iVar2 != 0) {
            uVar4 = uVar5;
          }
LAB_00142bbc:
          FUN_001477d8(lVar6,param_1);
        }
        else {
          FUN_001497c4(lVar6);
          uVar4 = 0x1b;
          if (iVar2 != 3) {
            uVar4 = 2;
          }
        }
      }
      else {
        uVar4 = 0x5d;
      }
    }
    else {
      FUN_0014d5f8(param_1,"easy handle already used in multi handle");
      uVar4 = 2;
    }
  }
  return uVar4;
}

