
void FUN_01ea4530(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  byte local_68 [4];
  undefined4 local_64;
  undefined2 local_60;
  byte local_5c [4];
  undefined4 local_58;
  undefined2 local_54;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
  uVar7 = (ulong)uVar1;
  if (uVar1 < 10) {
    lVar5 = uVar7 * 0xba0;
    if ((&DAT_053fee41)[lVar5] != '\0') {
      FUN_0219c0ec(&DAT_053fe348 + lVar5);
      (&DAT_053fe828)[lVar5] = 0;
      if ((*(byte *)(*(long *)(param_1 + 8) + 0x69c) >> 2 & 1) != 0) {
        FUN_02198d70(&DAT_053fe348 + lVar5,1);
        if (*(int *)(DAT_04cd19d8 + 0x15c) == 0) {
          FUN_0252d11c(local_5c);
          if ((local_5c[0] < 8) &&
             ((*(uint *)((long)&DAT_0555fbc8 + uVar7 * 4) >> (ulong)(local_5c[0] & 0x1f) & 1) != 0))
          {
            FUN_020ec6c4(uVar1,local_5c,0);
            if (local_5c[0] < 8) {
              *(uint *)((long)&DAT_0555fbc8 + uVar7 * 4) =
                   *(uint *)((long)&DAT_0555fbc8 + uVar7 * 4) &
                   (1 << (ulong)(local_5c[0] & 0x1f) ^ 0xffffffffU);
            }
          }
        }
        else {
          FUN_02507c6c(local_5c,1,1,1,0);
          puVar3 = PTR_DAT_04bb5038;
          local_64 = local_58;
          local_68[0] = 0xff;
          if (local_5c[0] < 8) {
            local_68[0] = local_5c[0];
          }
          local_60 = local_54;
          if (local_5c[0] < 8) {
            do {
              if ((*(uint *)((long)&DAT_0555fbc8 + uVar7 * 4) >> (ulong)(local_5c[0] & 0x1f) & 1) !=
                  0) {
                FUN_020ec6c4(uVar1,local_68,0);
                if (7 < local_68[0]) break;
                *(uint *)((long)&DAT_0555fbc8 + uVar7 * 4) =
                     *(uint *)((long)&DAT_0555fbc8 + uVar7 * 4) &
                     (1 << (ulong)(local_68[0] & 0x1f) ^ 0xffffffffU);
                local_5c[0] = local_68[0];
              }
              uVar6 = (ulong)local_5c[0];
              do {
                if (uVar6 == 7) goto LAB_01ea46d0;
                uVar6 = uVar6 + 1;
                uVar4 = FUN_02507924(local_68,puVar3 + uVar6);
              } while ((uVar4 & 1) == 0);
              local_5c[0] = puVar3[uVar6];
              if (7 < local_5c[0]) break;
              local_68[0] = local_5c[0];
            } while( true );
          }
        }
      }
    }
  }
LAB_01ea46d0:
  iVar2 = *(int *)(*(long *)(param_1 + 8) + 0x50c);
  if ((iVar2 != -1) && (lVar5 = FUN_021c9770(iVar2,1), lVar5 != 0)) {
    FUN_021caf94();
    if ((*(byte *)(*(long *)(param_1 + 8) + 0x69c) >> 2 & 1) != 0) {
      FUN_021ca0d0(lVar5,1);
    }
  }
  return;
}

