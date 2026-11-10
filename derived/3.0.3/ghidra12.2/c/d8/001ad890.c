
void FUN_001ad890(long param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined1 uVar11;
  undefined1 auStack_a8 [8];
  long local_a0;
  undefined1 auStack_98 [16];
  long local_88;
  undefined1 local_78 [24];
  
  puVar4 = PTR_DAT_04bcb900;
  plVar10 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      lVar9 = **(long **)(puVar4 + 0xa0);
      if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar10 = (long *)(*(long *)(lVar9 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar10 == 0) || (lVar9 = *(long *)(*plVar10 + 0x10), lVar9 == 0)) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x10);
  }
  plVar10 = (long *)(lVar9 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  lVar9 = *(long *)(param_1 + 0x60);
  if (lVar9 != param_1 + 0x58) {
    lVar1 = param_1 + 0x28;
    do {
      FUN_00187810(&local_a0);
      if (*(int *)(lVar9 + 0x90) == -1) {
        if (*(uint *)(lVar9 + 0xa4) < *(uint *)(lVar9 + 0xa8)) {
          if (*(long *)(lVar9 + 0x98) == 0) goto LAB_001ad9f4;
          goto LAB_001ada30;
        }
      }
      else if ((long)*(int *)(lVar9 + 0xa0) < local_a0 - *(long *)(lVar9 + 0x98)) {
        if (*(long *)(lVar9 + 0x98) == 0) {
LAB_001ad9f4:
          if (7 < *(uint *)(lVar9 + 0xa4)) goto LAB_001ada30;
          lVar7 = FUN_001b8fa0(lVar9 + 0x18,"probeinit",0);
          if ((lVar7 == 0) || (lVar7 = FUN_001b8fa0(lVar9 + 0x18,&DAT_0410a6d5,0), lVar7 != 0))
          goto LAB_001ada30;
          bVar3 = false;
          uVar11 = *PTR_DAT_04bcc458;
        }
        else {
LAB_001ada30:
          uVar11 = 0;
          bVar3 = true;
        }
        lVar7 = lVar9 + 0x18;
        if (*(int *)(lVar9 + 0xa4) != 0) {
          bVar3 = true;
        }
        FUN_00187810(auStack_a8);
        FUN_00197218(auStack_98);
        local_78[0] = 0;
        FUN_00197478(auStack_98,local_78,1);
        FUN_00197478(auStack_98,lVar1,4);
        FUN_00197540(auStack_98,auStack_a8);
        lVar5 = local_88;
        plVar8 = *(long **)(param_1 + 0x30);
        if (plVar8 == (long *)0x0) {
          plVar8 = *(long **)(param_1 + 0x20);
          if (*(char *)(lVar9 + 0x80) == '\0') {
            FUN_001b8590(lVar7);
          }
          (**(code **)(*plVar8 + 0x30))
                    (local_78,plVar8,*(undefined8 *)(lVar9 + 0x20),(int)plVar8[1],(char)plVar8[3],
                     lVar5,uVar11,0);
          FUN_00197350(auStack_98);
        }
        else {
          (**(code **)(*plVar8 + 0x18))
                    (plVar8,lVar7,*(long *)(local_88 + 0x10) + *(long *)(local_88 + 0x28),
                     *(undefined8 *)(local_88 + 0x18),uVar11);
          FUN_00197350(auStack_98);
        }
        if (!bVar3) {
          FUN_00187810(auStack_a8);
          FUN_00197218(auStack_98);
          local_78[0] = 0;
          FUN_00197478(auStack_98,local_78,1);
          FUN_00197478(auStack_98,lVar1,4);
          FUN_00197540(auStack_98,auStack_a8);
          lVar5 = local_88;
          plVar8 = *(long **)(param_1 + 0x30);
          if (plVar8 == (long *)0x0) {
            plVar8 = *(long **)(param_1 + 0x20);
            if (*(char *)(lVar9 + 0x80) == '\0') {
              FUN_001b8590(lVar7);
            }
            (**(code **)(*plVar8 + 0x30))
                      (local_78,plVar8,*(undefined8 *)(lVar9 + 0x20),(int)plVar8[1],(char)plVar8[3],
                       lVar5,uVar11,0);
          }
          else {
            (**(code **)(*plVar8 + 0x18))
                      (plVar8,lVar7,*(long *)(local_88 + 0x10) + *(long *)(local_88 + 0x28),
                       *(undefined8 *)(local_88 + 0x18),uVar11);
          }
          FUN_00197350(auStack_98);
          FUN_00187810(auStack_a8);
          FUN_00197218(auStack_98);
          local_78[0] = 0;
          FUN_00197478(auStack_98,local_78,1);
          FUN_00197478(auStack_98,lVar1,4);
          FUN_00197540(auStack_98,auStack_a8);
          lVar5 = local_88;
          plVar8 = *(long **)(param_1 + 0x30);
          if (plVar8 == (long *)0x0) {
            plVar8 = *(long **)(param_1 + 0x20);
            if (*(char *)(lVar9 + 0x80) == '\0') {
              FUN_001b8590(lVar7);
            }
            (**(code **)(*plVar8 + 0x30))
                      (local_78,plVar8,*(undefined8 *)(lVar9 + 0x20),(int)plVar8[1],(char)plVar8[3],
                       lVar5,uVar11,0);
          }
          else {
            (**(code **)(*plVar8 + 0x18))
                      (plVar8,lVar7,*(long *)(local_88 + 0x10) + *(long *)(local_88 + 0x28),
                       *(undefined8 *)(local_88 + 0x18),uVar11);
          }
          FUN_00197350(auStack_98);
        }
        *(int *)(lVar9 + 0xa4) = *(int *)(lVar9 + 0xa4) + 1;
      }
      lVar9 = *(long *)(lVar9 + 8);
    } while (lVar9 != param_1 + 0x58);
  }
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return;
}

