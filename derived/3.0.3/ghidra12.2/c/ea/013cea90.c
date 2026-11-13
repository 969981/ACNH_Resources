
void FUN_013cea90(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined4 local_120;
  undefined1 local_11c [127];
  undefined1 local_9d;
  undefined4 local_98;
  undefined2 local_94;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  short local_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  byte local_70;
  char local_6e;
  
  lVar6 = 0;
  uVar5 = 0;
  lVar7 = 0x4f8;
  puVar1 = PTR_DAT_04bb2018 + 0x10;
  do {
    if ((uVar5 < *(byte *)((long)param_1 + 0x59a)) ||
       (uVar5 < (ulong)*(byte *)((long)param_1 + 0x59b) + (ulong)*(byte *)((long)param_1 + 0x59a)))
    {
      local_80 = 0;
      uStack_7c = 0;
      local_78 = -2;
      uStack_76 = 0;
      uStack_74 = 0;
      local_88 = puVar1;
      FUN_0277d4ac(&local_78);
      local_70 = 0xff;
      uVar3 = (**(code **)(*param_1 + 0x198))(param_1,&local_88,uVar5 & 0xffffffff);
      uVar4 = (**(code **)(*param_1 + 0x1a0))(param_1,uVar5 & 0xffffffff);
      if (((uVar4 & 1) != 0) && (local_78 != -2)) {
        if ((*(char *)((long)param_1 + lVar6 + 0x291) == '\0') &&
           (*(int *)((long)param_1 + lVar7) == 0)) {
          if ((uVar3 & 1) != 0) {
LAB_013cebf0:
            local_160 = 0xffffffff00000000;
            local_9d = 0;
            local_11c[0] = 0;
            local_90 = 0;
            local_94 = 0;
            local_158 = 0;
            local_150 = 0;
            local_14c = 0x3f800000;
            local_120 = 0x80;
            local_144 = 0;
            uStack_13c = 0;
            local_130 = &DAT_048fc708;
            local_98 = 7;
            puStack_128 = local_11c;
            uVar3 = (**(code **)(*param_1 + 0x150))(param_1,&local_160,&local_88,uVar5 & 0xffffffff)
            ;
            if ((uVar3 & 1) != 0) {
              uVar2 = (**(code **)(*param_1 + 0x178))(param_1,&local_160);
              *(undefined4 *)((long)param_1 + lVar7) = uVar2;
              *(ulong *)((long)param_1 + lVar6 + 0x284) =
                   CONCAT26(uStack_76,CONCAT24(local_78,uStack_7c));
              *(undefined4 *)((long)param_1 + lVar6 + 0x280) = local_80;
              bVar8 = local_70;
              if (7 < local_70) {
                bVar8 = 0xff;
              }
              *(byte *)((long)param_1 + lVar6 + 0x290) = bVar8;
              *(undefined1 *)((long)param_1 + lVar6 + 0x291) = 1;
              *(undefined4 *)((long)param_1 + lVar6 + 0x28c) = uStack_74;
              *(char *)((long)param_1 + lVar6 + 0x292) = local_6e;
            }
          }
        }
        else if ((uVar3 & 1) == 0) {
          (**(code **)(*param_1 + 0x180))(param_1,uVar5 & 0xffffffff);
        }
        else if ((*(char *)((long)param_1 + lVar6 + 0x292) != local_6e) ||
                (uVar3 = FUN_0277d7b4((long)param_1 + lVar6 + 0x288,&local_78), (uVar3 & 1) == 0)) {
          (**(code **)(*param_1 + 0x188))(param_1,uVar5 & 0xffffffff);
          goto LAB_013cebf0;
        }
      }
    }
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 0x20;
    lVar7 = lVar7 + 8;
    if (uVar5 == 0x14) {
      return;
    }
  } while( true );
}

