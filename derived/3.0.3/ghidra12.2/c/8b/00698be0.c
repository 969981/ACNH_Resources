
/* WARNING: Removing unreachable block (ram,0x00698e00) */

bool FUN_00698be0(long param_1)

{
  uint uVar1;
  char cVar2;
  size_t sVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long local_1fb8 [2];
  ulong local_1fa8;
  undefined8 local_1fa0;
  undefined8 uStack_1f98;
  undefined8 local_1f90;
  undefined8 uStack_1f88;
  undefined8 local_1f80;
  undefined8 uStack_1f78;
  undefined8 local_1f70;
  undefined8 uStack_1f68;
  undefined8 local_1f60;
  undefined8 uStack_1f58;
  undefined8 local_1f50;
  undefined8 uStack_1f48;
  size_t local_1f40;
  uint local_1f38 [768];
  undefined4 local_1338;
  undefined2 local_1334;
  undefined2 local_1332;
  undefined1 auStack_1308 [112];
  undefined1 auStack_1298 [4096];
  undefined1 auStack_298 [568];
  
  FUN_00698b20();
  puVar9 = (undefined8 *)((ulong)&local_1338 | 6);
  do {
    while( true ) {
      do {
        memset(auStack_1308,0,0x1070);
        local_1338 = 2;
        local_1334 = 0x10a0;
        puVar9[4] = 0;
        *(undefined2 *)(puVar9 + 5) = 0;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        local_1f38[0] = FUN_006aea60(&local_1338);
        uVar1 = local_1f38[0] & 0x3fffff;
        if (uVar1 == 0x69a) goto LAB_00698e3c;
        if (local_1f38[0] != 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl((Result *)local_1f38);
        }
        memset(local_1f38,0,0xc00);
        local_1f40 = 0;
        iVar5 = nn::util::Base64::FromBase64String
                          (&local_1f40,local_1f38,0xc00,auStack_1298,local_1332,1);
      } while (iVar5 != 0);
      local_1fb8[0] = 0;
      local_1f50 = 0;
      uStack_1f48 = 0;
      local_1f60 = 0;
      uStack_1f58 = 0;
      local_1f70 = 0;
      uStack_1f68 = 0;
      local_1f80 = 0;
      uStack_1f78 = 0;
      local_1f90 = 0;
      uStack_1f88 = 0;
      local_1fa0 = 0;
      uStack_1f98 = 0;
      local_1fb8[1] = 0;
      local_1fa8 = 0;
      FUN_00693484(local_1fb8,&local_1fa0,2);
      FUN_0069396c(local_1fb8,"$.type",param_1,0x20);
      FUN_006938e4(local_1fb8,"$.receiver_user_id",param_1 + 0x20);
      sVar3 = local_1f40;
      memset(auStack_298,0,0x230);
      FUN_00694a2c(auStack_298);
      FUN_00694a74(auStack_298,PTR_LAB_04bdf410,local_1fb8);
      uVar6 = FUN_00694a80(auStack_298,local_1f38,sVar3);
      if ((uVar6 & 1) != 0) break;
LAB_00698de0:
      FUN_00695e14(auStack_298);
    }
    uVar6 = local_1fa8 & 0xffffffff;
    if ((int)local_1fa8 < 1) {
      FUN_00695e14(auStack_298);
      goto LAB_00698e10;
    }
    if (*(char *)(local_1fb8[0] + 0x29) != '\x01') goto LAB_00698de0;
    pcVar7 = (char *)(local_1fb8[0] + 0x59);
    uVar4 = 1;
    do {
      uVar8 = uVar4;
      if (uVar6 == uVar8) break;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 0x30;
      uVar4 = uVar8 + 1;
    } while (cVar2 == '\x01');
    FUN_00695e14(auStack_298);
    if (uVar6 <= uVar8) {
LAB_00698e10:
      sVar3 = local_1f40;
      memcpy((void *)(param_1 + 0x28),local_1f38,local_1f40);
      *(size_t *)(param_1 + 0x828) = sVar3;
LAB_00698e3c:
      return uVar1 != 0x69a;
    }
  } while( true );
}

