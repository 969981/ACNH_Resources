
void FUN_038bb700(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_d8 = param_4;
  uStack_d0 = param_5;
  local_c8 = param_6;
  uStack_c0 = param_7;
  local_b8 = param_8;
  memset(&DAT_05ae7290,0,0x180);
  uVar5 = FUN_038d4840(&DAT_05ae7290,0x180,
                       "\n//================= PROGRAM HALT ==================//\nSource File: %s\nLine Number: %d\nDescription: "
                       ,param_1,param_2);
  if (-1 < (int)uVar5) {
    if (uVar5 != 0x180) {
      uVar8 = (ulong)(0x180 - uVar5);
      local_78 = (undefined8 *)0xffffff80ffffffd8;
      local_90 = (undefined1 *)register0x00000008;
      local_88 = (undefined8 *)((long)register0x00000008 + -0xb0);
      local_80 = &uStack_e0;
      uVar6 = nn::util::VSNPrintf(&DAT_05ae7290 + uVar5,uVar8,param_3,&local_90);
      if (((int)uVar6 < 0) || (0x180 - uVar5 <= uVar6)) {
        (&DAT_05ae7290 + uVar5)[uVar8 - 1] = 0;
      }
      if (uVar8 <= (ulong)(long)(int)uVar6) {
        uVar6 = 0x17f - uVar5;
      }
      if (-1 < (int)uVar6) {
        uVar6 = uVar6 + uVar5;
        uVar5 = FUN_038d4840(&DAT_05ae7290 + uVar6,0x180 - uVar6,
                             "\n//=================================================//");
        if ((int)uVar5 < 1) {
          uVar8 = (ulong)uVar6;
        }
        else {
          uVar1 = (ulong)uVar5 + (ulong)uVar6;
          if ((uint)uVar1 < 0x17e) {
            (&DAT_05ae7290)[uVar1] = 10;
            uVar8 = (uVar1 & 0xffffffff) + 1;
            *(undefined1 *)((uVar1 & 0xffffffff) + 0x5ae7291) = 0;
          }
          else {
            uVar8 = 0x17f;
          }
        }
        DAT_05ae740f = 0;
        iVar7 = (int)uVar8;
        goto joined_r0x038bb864;
      }
    }
  }
  DAT_05ae740f = 0;
  uVar8 = strlen(&DAT_05ae7290);
  iVar7 = (int)uVar8;
joined_r0x038bb864:
  puVar4 = DAT_05ae7420;
  if (0 < iVar7) {
    local_90 = (undefined1 *)((ulong)local_90 & 0xffffffff00000000);
    local_68 = 0;
    local_88 = &DAT_0407ebb1;
    local_80 = &DAT_0407ebb1;
    local_78 = &DAT_0407ebb1;
    uStack_70 = 3;
    local_60 = 0;
    uStack_58 = 0;
    nn::diag::detail::PutImpl((LogMetaData *)&local_90,&DAT_05ae7290,uVar8 & 0xffffffff);
    puVar4 = DAT_05ae7420;
  }
  while (puVar4 != &DAT_05ae7418) {
    puVar2 = (undefined8 *)puVar4[1];
    (*(code *)**(undefined8 **)(puVar4[2] + 0x40))((undefined8 *)(puVar4[2] + 0x40),&DAT_05ae7290);
    puVar4 = puVar2;
  }
  uVar8 = nn::diag::IsDebuggerAttached();
  if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)UndefinedInstructionException(0x8002,0x38bb8dc);
  (*pcVar3)();
}

