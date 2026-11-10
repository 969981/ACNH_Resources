
void FUN_001d3470(long param_1,ulong param_2,void *param_3)

{
  undefined1 *__dest;
  ulong uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  long *plVar6;
  ulong local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *puStack_50;
  ulong local_48;
  undefined1 auStack_40 [8];
  undefined1 local_38;
  undefined8 local_28;
  
  puVar2 = PTR_DAT_04bcbb78;
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar5 != 0) {
      plVar6 = *(long **)(*(long *)(puVar2 + (param_2 & 0xffffffff) * 0x2a8 + 0x10) +
                          (ulong)*puVar5 * 0x148 + 0x100);
      goto joined_r0x001d3508;
    }
  }
  plVar6 = *(long **)(puVar2 + (param_2 & 0xffffffff) * 0x2a8 + 0x118);
joined_r0x001d3508:
  if (plVar6 == (long *)0x0) {
    memset(param_3,0xef,0x10);
    return;
  }
  local_38 = 0;
  puStack_50 = PTR_DAT_04bcc6f8 + 0x10;
  local_60 = PTR_DAT_04bcc6f0 + 0x10;
  local_58 = 0;
  uVar4 = FUN_001e1884(param_1 + 0x140);
  local_28 = (undefined1 *)CONCAT44(local_28._4_4_,uVar4);
  local_48 = 4;
  memcpy(auStack_40,&local_28,4);
  uVar3 = FUN_001e14f8(param_1 + 0x140);
  local_28 = (undefined1 *)CONCAT62(local_28._2_6_,uVar3);
  uVar1 = local_48 + 2;
  if (local_48 + 2 <= local_48) {
    uVar1 = local_48;
  }
  if (6 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/LiteBuffer.h",0x4e,
                 0xe0000019,0);
  }
  __dest = auStack_40 + local_48;
  local_48 = uVar1;
  memcpy(__dest,&local_28,2);
  local_28 = auStack_40;
  local_68 = local_48;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_28,&local_68,1,param_3);
  *(undefined8 *)((long)param_3 + 0x10) = 0x10;
  return;
}

