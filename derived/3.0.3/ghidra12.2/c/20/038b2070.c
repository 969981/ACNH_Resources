
long * FUN_038b2070(long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  FileHandle *pFVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  byte bVar8;
  undefined *local_168;
  char *local_160;
  undefined4 local_158;
  char local_154 [255];
  undefined1 local_55;
  int local_34;
  
  if (param_4 - 1 < 3) {
    uVar7 = *(uint *)(&DAT_041994e4 + (long)(int)(param_4 - 1) * 4);
  }
  else {
    uVar7 = 1;
  }
  local_55 = 0;
  local_158 = 0x100;
  local_160 = local_154;
  local_154[0] = '\0';
  local_168 = PTR_DAT_04bb21f8 + 0x10;
  uVar5 = (**(code **)(*param_1 + 0x108))(param_1,&local_168);
  if ((uVar5 & 1) == 0) {
    *(undefined4 *)((long)param_1 + 0x7c) = 0x271002;
    return (long *)0x0;
  }
  if ((param_4 | 2) == 3) {
    (**(code **)(local_168 + 0x18))(&local_168);
    uVar3 = nn::fs::GetEntryType((DirectoryEntryType *)&local_34,local_160);
    if (uVar3 == 0) {
      if (param_4 != 3) {
        if (local_34 != 1) goto LAB_038b2178;
        bVar8 = 1;
        goto LAB_038b21ac;
      }
      if (local_34 == 1) {
        uVar3 = 0x402;
        goto LAB_038b219c;
      }
LAB_038b2178:
      (**(code **)(local_168 + 0x18))(&local_168);
      uVar3 = nn::fs::CreateFile(local_160,0);
      if (uVar3 == 0) goto LAB_038b21a8;
    }
    else if ((uVar3 & 0x3fffff) == 0x202) goto LAB_038b2178;
LAB_038b219c:
    *(uint *)((long)param_1 + 0x7c) = uVar3;
    plVar6 = (long *)0x0;
  }
  else {
LAB_038b21a8:
    bVar8 = 0;
LAB_038b21ac:
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(byte *)(param_2 + 0x28) = (byte)(uVar7 >> 1) & 1;
    pFVar1 = (FileHandle *)(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x29) = 0;
    (**(code **)(local_168 + 0x18))(&local_168);
    iVar4 = nn::fs::OpenFile(pFVar1,local_160,uVar7);
    *(int *)((long)param_1 + 0x7c) = iVar4;
    plVar6 = (long *)0x0;
    if (iVar4 == 0) {
      bVar2 = (bool)(bVar8 ^ 1);
      if (param_4 != 1) {
        bVar2 = true;
      }
      if ((bVar2) || (iVar4 = nn::fs::SetFileSize(*(undefined8 *)pFVar1,0), iVar4 == 0)) {
        plVar6 = param_1;
      }
      else {
        nn::fs::CloseFile(*(undefined8 *)pFVar1);
        *(int *)((long)param_1 + 0x7c) = iVar4;
        plVar6 = (long *)0x0;
      }
    }
  }
  return plVar6;
}

