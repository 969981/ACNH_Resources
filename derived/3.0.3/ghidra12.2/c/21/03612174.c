
uint switchD_035e6abc::caseD_8c(char *param_1,long *param_2)

{
  ushort *puVar1;
  ulong *puVar2;
  ushort uVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  ulong uVar8;
  uint uVar9;
  short sVar10;
  ulong uVar11;
  undefined1 auStack_44 [4];
  ulong local_28;
  
  uVar9 = FUN_04002180(param_2,2,2,auStack_44);
  if ((uVar9 & 1) != 0) {
    iVar4 = (int)param_2[1];
    puVar1 = (ushort *)(param_1 + 4);
    if (iVar4 == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,2);
      cVar5 = *(char *)((long)param_2 + 0xc);
    }
    else if (iVar4 == 1) {
      uVar7 = *puVar1;
      uVar3 = uVar7 >> 8 | uVar7 << 8;
      if ((int)param_2[2] != 0xff00) {
        uVar3 = uVar7;
      }
      local_28 = CONCAT62(local_28._2_6_,uVar3);
      (**(code **)(*param_2 + 0x30))(param_2,&local_28);
      cVar5 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_28 = (ulong)local_28._2_6_ << 0x10;
      (**(code **)(*param_2 + 0x20))(param_2,&local_28,2);
      uVar3 = (ushort)local_28 >> 8 | (ushort)local_28 << 8;
      if ((int)param_2[2] != 0xff00) {
        uVar3 = (ushort)local_28;
      }
      *puVar1 = uVar3;
      cVar5 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar5 != '\0') {
      local_28._1_7_ = (undefined7)(local_28 >> 8);
      local_28 = CONCAT71(local_28._1_7_,8);
      (**(code **)(*param_2 + 0x20))(param_2,&local_28,1);
    }
    puVar2 = (ulong *)(param_1 + 0x10);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar2,8);
    }
    else if ((int)param_2[1] == 1) {
      uVar11 = *puVar2;
      uVar8 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      local_28 = uVar8 >> 0x20 | uVar8 << 0x20;
      if ((int)param_2[2] != 0xff00) {
        local_28 = uVar11;
      }
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    else {
      local_28 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_28,8);
      uVar8 = (local_28 & 0xff00ff00ff00ff00) >> 8 | (local_28 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      if ((int)param_2[2] != 0xff00) {
        uVar8 = local_28;
      }
      *puVar2 = uVar8;
    }
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 6);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 7);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 8);
    local_28._0_1_ = *param_1;
    (**(code **)(*param_2 + 0x28))(param_2,&local_28);
    *param_1 = (char)local_28 != '\0';
    local_28 = CONCAT71(local_28._1_7_,param_1[1]);
    (**(code **)(*param_2 + 0x28))(param_2,&local_28);
    param_1[1] = (char)local_28 != '\0';
    if (iVar4 == 0) {
      bVar6 = param_1[8];
      if ((bVar6 >> 2 & 1) == 0) {
        sVar10 = 0xfff;
      }
      else {
        sVar10 = (short)(0x10 << (ulong)((uint)bVar6 * 2 + 6 & 6)) + -1;
      }
      *(short *)(param_1 + 2) = sVar10;
    }
  }
  return uVar9 & 1;
}

