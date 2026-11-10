
void FUN_002c0a90(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_150;
  ErrorResultVariant aEStack_14c [124];
  undefined1 auStack_d0 [128];
  undefined4 local_44;
  
  puVar2 = PTR_DAT_04bcb900;
  plVar10 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (DAT_04c58c68 != '\0') {
    puVar4 = (uint *)FUN_03876070(DAT_04c58c60);
    uVar3 = *puVar4;
    if (uVar3 != 0) {
      lVar5 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("D:\\home\\ead-p2p\\Env\\Lib\\NintendoSDK\\NintendoSDK-NEX\\NintendoSDK-NEX-for_NX-4_6_11-S2050-20250306-ja\\NintendoSDK-NEX\\Include\\OnlineCore/src/Core/InstanceTable.h"
                     ,0x47,0xe0000003,0);
      }
      plVar10 = (long *)(*(long *)(lVar5 + (ulong)uVar3 * 8) + 0x10);
    }
  }
  lVar5 = FUN_001b6044(*(undefined8 *)(*plVar10 + 0x10));
  FUN_002b3fa8(auStack_d0);
  lVar11 = *(long *)(lVar5 + 0x58);
  do {
    if (lVar11 == lVar5 + 0x50) {
      if (param_3 != 0) {
        FUN_002b415c(param_3,auStack_d0);
      }
      local_150 = 0;
      local_170 = (ulong)local_170._4_4_ << 0x20;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_14c,(Result *)&local_170);
      FUN_002296c4(param_1,&local_150);
LAB_002c0c90:
      FUN_002b4104(auStack_d0);
      return;
    }
    lVar1 = lVar11 + 0x10;
    lVar6 = FUN_001b7ba4(lVar1);
    lVar7 = 0;
    if (*(long **)(param_2 + 0x50) != (long *)0x0) {
      lVar7 = (**(code **)(**(long **)(param_2 + 0x50) + 0x18))();
    }
    if (lVar6 == lVar7) {
      uVar3 = FUN_001b923c(lVar1);
      if ((uVar3 >> 1 & 1) == 0) {
        FUN_002b3fa8(&local_150);
        FUN_002beb38(lVar1,&local_150);
        FUN_002b4370(&local_150);
        uVar8 = FUN_0021fea0();
        if ((uVar8 & 1) == 0) goto LAB_002c0c48;
        uVar9 = FUN_002b4370(&local_150);
        FUN_0021f508(&local_170,uVar9);
      }
      else {
        FUN_002b3fa8(&local_150);
        FUN_002beb38(lVar1,&local_150);
        FUN_002b4368(&local_150);
        uVar8 = FUN_0021fea0();
        if ((uVar8 & 1) == 0) {
LAB_002c0c48:
          local_168 = 0;
          local_170 = 1;
          FUN_002b493c(&local_150,&local_170);
          local_44 = 0;
          local_170 = CONCAT44(local_170._4_4_,0x6434);
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((long)&local_170 + 4),(Result *)&local_44);
          FUN_002296c4(param_1,&local_170);
          FUN_002b4104(&local_150);
          goto LAB_002c0c90;
        }
        uVar9 = FUN_002b4370(auStack_d0);
        FUN_0021f508(&local_170,uVar9);
        FUN_002b415c(auStack_d0,&local_150);
      }
      FUN_002b44ec(auStack_d0,&local_170);
      FUN_0021f584(&local_170);
      FUN_002b4104(&local_150);
    }
    lVar11 = *(long *)(lVar11 + 8);
  } while( true );
}

