
undefined8 * FUN_0047eee0(char *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auStack_70 [64];
  undefined8 local_30;
  char *local_28;
  
  local_28 = param_1;
  uVar1 = nn::fs::OpenFile((FileHandle *)&local_30,param_1,6);
  if (((param_2 >> 1 & 1) == 0) || (uVar1 != 0)) {
    if ((uVar1 & 0x1ff) == 2) {
      if ((uVar1 & 0x3ffe00) == 0x200) {
        iVar2 = nn::fs::CreateFile(param_1,0);
        if (iVar2 != 0) {
          return (undefined8 *)0x0;
        }
        uVar1 = nn::fs::OpenFile((FileHandle *)&local_30,local_28,6);
        goto LAB_0047efd4;
      }
      if (299 < (uVar1 >> 9 & 0x1fff) - 0xc80) goto LAB_0047efd4;
      if (1 < DAT_04c6f600) {
        FUN_00444bc0(auStack_70,&DAT_04c6f5b0,2);
        lVar3 = FUN_004446b0(auStack_70,"Insufficient memory trying to open {}",&DAT_048534d0,
                             &local_28);
        *(char **)(lVar3 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Platform/Switch/Common/Base/hkNxStreamWriter.cpp"
        ;
        *(undefined8 *)(lVar3 + 0x30) = 0x1f;
        FUN_00444c00(auStack_70);
      }
    }
    else {
LAB_0047efd4:
      if (uVar1 == 0) goto LAB_0047efe0;
    }
    puVar4 = (undefined8 *)0x0;
  }
  else {
    nn::fs::SetFileSize(local_30,0);
LAB_0047efe0:
    puVar4 = (undefined8 *)FUN_00438810(0x30);
    FUN_0046fbf0();
    puVar4[3] = local_30;
    puVar4[5] = 0;
    *puVar4 = &PTR_LAB_048657b8;
    *(undefined1 *)(puVar4 + 4) = 1;
  }
  return puVar4;
}

